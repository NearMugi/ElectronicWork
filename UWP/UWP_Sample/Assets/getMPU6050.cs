using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class getMPU6050 : MonoBehaviour
{
    [SerializeField]
    Text txt;
    [SerializeField]
    GameObject plane;
    Transform transform;

    mpu6050.MPU6050 _mpu6050 = new mpu6050.MPU6050();
    mpu6050.MpuSensorValue _v;

    // Start is called before the first frame update
    void Start()
    {
        _mpu6050.InitHardware();
        _v = new mpu6050.MpuSensorValue();

        transform = plane.GetComponent<Transform>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        _mpu6050.update();
        _v = _mpu6050.getValue();

#if false
        txt.text = string.Format("{0}, {1}, {2}", 
            LastValue.AccelerationX.ToString("0.00"), 
            LastValue.AccelerationY.ToString("0.00"), 
            LastValue.AccelerationZ.ToString("0.00")
            );
#endif
        txt.text = string.Empty;
        txt.text += _mpu6050.getMsg();
        txt.text += _v.degX.ToString("0.00");
        txt.text += ", ";
        txt.text += _v.degY.ToString("0.00");

        transform.localEulerAngles = new Vector3(_v.degX, 0.0f, _v.degY);

    }
}
