using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;



public class mpur6050_main : MonoBehaviour
{
    [SerializeField]
    Text txt_Debug;
    String Msg = String.Empty;

    [SerializeField]
    Transform plane;

    float[] qu = new float[4];
    float[] eulerAngle = new float[3];

    byte initStatus; //0 : 初期化前
                     //1 : InitHardware終了待ち
                     //2 : dmpInitialize終了待ち
                     //3 : 初期化失敗
                     //4 : 初期化完了




    MPU6050.MPU6050 _mpu;

    // orientation/motion vars
    MPU6050.MPU6050.Quaternion q = new MPU6050.MPU6050.Quaternion();           // [w, x, y, z]         quaternion container
    MPU6050.MPU6050.VectorInt16 aa = new MPU6050.MPU6050.VectorInt16();         // [x, y, z]            accel sensor measurements
    MPU6050.MPU6050.VectorInt16 aaReal = new MPU6050.MPU6050.VectorInt16();     // [x, y, z]            gravity-free accel sensor measurements
    MPU6050.MPU6050.VectorInt16 aaWorld = new MPU6050.MPU6050.VectorInt16();    // [x, y, z]            world-frame accel sensor measurements
    MPU6050.MPU6050.VectorFloat gravity = new MPU6050.MPU6050.VectorFloat();    // [x, y, z]            gravity vector
    float[] euler = new float[3];         // [psi, theta, phi]    Euler angle container
    float[] ypr = new float[3];           // [yaw, pitch, roll]   yaw/pitch/roll container and gravity vector

    bool dmpReady = false;  // set true if DMP init was successful
    byte mpuIntStatus;   // holds actual interrupt status byte from MPU
    uint packetSize;    // expected DMP packet size (default is 42 bytes)
    int fifoCount;     // count of all bytes currently in FIFO
    byte[] fifoBuffer = new byte[64]; // FIFO storage buffer
    int[] CalOfs = new int[4];  //Gyro x,y,z, Accel z

    public void updateValue()
    {
        if(_mpu.devStatus != 0)
        {
            return;
        }

        // if programming failed, don't try to do anything
        if (!dmpReady)
        {
            Msg = "devStatus : ";
            Msg += _mpu.devStatus;
            Msg += "\nDMP Not Ready\n";
            return;
        }

        //get INT_STATUS byte
        mpuIntStatus = _mpu.getIntStatus();

        if ((mpuIntStatus & 0x12) != 0)
        {
            // FIFOのデータサイズを取得
            uint fifoCount = _mpu.getFIFOCount();
            if ((mpuIntStatus & 0x10) != 0 || (1024 <= fifoCount))
            {
                // オーバーフローを検出したらFIFOをリセット(そもそも検出されないコトあり…)
                _mpu.resetFIFO();
                //Serial.println(F("FIFO overflow!"));
                Msg = "FIFO overflow!\n";
            }
            else if ((mpuIntStatus & 0x02) != 0 && (packetSize <= fifoCount))
            {
                Msg = "Read FIFO Data\n"; // + fifoCount + "\n";
                // データの読み出し可能
                // FIFOよりデータを読み出す
                _mpu.getFIFOBytes(ref fifoBuffer, packetSize);
                _mpu.dmpGetQuaternion(ref q, ref fifoBuffer);
                _mpu.dmpGetGravity(ref gravity, ref q);
                _mpu.dmpGetAccel(ref aa, ref fifoBuffer);
                _mpu.dmpGetLinearAccel(ref aaReal, ref aa, ref gravity);
                _mpu.dmpGetLinearAccelInWorld(ref aaWorld, ref aaReal, ref q);
                _mpu.dmpGetYawPitchRoll(ref ypr, q, gravity);
            }
        }
    }

    void getEulerAngle(ref float[] v)
    {
        v[0] = (float)(ypr[0] * 180 / Math.PI);
        v[1] = (float)(ypr[1] * 180 / Math.PI);
        v[2] = (float)(ypr[2] * 180 / Math.PI);
    }

    void getQuaternion(ref float[] v)
    {
        v[0] = q.w;
        v[1] = q.x;
        v[2] = q.y;
        v[3] = q.z;
    }

    void getGravity(ref float[] v)
    {
        v[0] = gravity.x;
        v[1] = gravity.y;
        v[2] = gravity.z;
    }

    void getRealAccel(ref int[] v)
    {
        v[0] = aaReal.x;
        v[1] = aaReal.y;
        v[2] = aaReal.z;
    }

    void getWorldAccel(ref int[] v)
    {
        v[0] = aaWorld.x;
        v[1] = aaWorld.y;
        v[2] = aaWorld.z;
    }

    // Start is called before the first frame update
    void Start()
    {
        qu = new float[] {0.0f, 0.0f, 0.0f, 0.0f };
        initStatus = 0;

        CalOfs = new int[] { 167, -27, -18, 1072 };
        _mpu = new MPU6050.MPU6050();
    }

    // Update is called once per frame
    void Update()
    {
        switch (initStatus)
        {
            case 0:
                _mpu.devStatus = 0;
                _mpu.InitHardware();

                initStatus = 1;
                break;

            case 1:
                if(!_mpu.isInitHardware) return;
                _mpu.dmpInitialize();

                initStatus = 2;
                break;

            case 2:
                if (!_mpu.isdmpInitialize) return;

//                _mpu.setXGyroOffset(CalOfs[0]);
//                _mpu.setYGyroOffset(CalOfs[1]);
//                _mpu.setZGyroOffset(CalOfs[2]);
//                _mpu.setZAccelOffset(CalOfs[3]);

                // make sure it worked (returns 0 if so)
                if (_mpu.devStatus == 0)
                {
                    // turn on the DMP, now that it's ready
                    //Debug.Log("Enabling DMP...");
                    _mpu.setDMPEnabled(true);

                    // enable Arduino interrupt detection
                    mpuIntStatus = _mpu.getIntStatus();

                    // set our DMP Ready flag so the main loop() function knows it's okay to use it
                    //Debug.Log("DMP ready! Waiting for first interrupt...");
                    dmpReady = true;

                    // get expected DMP packet size for later comparison
                    packetSize = _mpu.dmpGetFIFOPacketSize();

                    //Debug.Log("DMP ready! packetSize:");
                    //Debug.Log(packetSize);

                }
                else
                {
                    // ERROR!
                    // 1 = initial memory load failed
                    // 2 = DMP configuration updates failed
                    // (if it's going to break, usually the code will be 1)
                    //Debug.Log("DMP Initialization failed (code ");
                    //Debug.Log(devStatus);
                    //Serial.println(F(")"));
                    _mpu.devStatus = 2;
                }

                initStatus = 3;
                break;

            case 3:
                updateValue();
                getEulerAngle(ref eulerAngle);
                getQuaternion(ref qu);                
                break;

            default:
                break;

        }





        if(initStatus != 3)
        {
            _mpu.ischkInitErr();
            switch (_mpu.devStatus)
            {
                case 0:
                    Msg = "Error is Nothing\n";
                    break;
                case 1:
                    Msg = "initial memory load failed\n";
                    break;
                case 2:
                    Msg = "DMP configuration updates failed\n";
                    break;
                case 3:
                    Msg = "Init Error\n";
                    break;
                case 4:
                    Msg = "Debug Return\n";
                    break;
                case 5:
                    Msg = "isInitErr True \n";
                    break;

                default:
                    break;
            }


        }

        txt_Debug.text = String.Empty;
//        txt_Debug.text += initStatus.ToString();
//        txt_Debug.text += "\n";
        txt_Debug.text += _mpu.mpu6050Msg;
        txt_Debug.text += Msg;
        txt_Debug.text += eulerAngle[0].ToString("0.00");
        txt_Debug.text += ",";
        txt_Debug.text += eulerAngle[1].ToString("0.00");
        txt_Debug.text += ",";
        txt_Debug.text += eulerAngle[2].ToString("0.00");

        //plane.localRotation = new Quaternion(qu[1], qu[2], qu[3], qu[0]);
        plane.localEulerAngles = new Vector3(eulerAngle[0], eulerAngle[1], eulerAngle[2]);
    }
}
