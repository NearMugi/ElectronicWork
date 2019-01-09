using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class getMPU6050 : MonoBehaviour
{
    [SerializeField]
    Text txt;

    mpu6050.MPU6050 _mpu6050 = new mpu6050.MPU6050();
    mpu6050.MpuSensorValue LastValue;

    // Start is called before the first frame update
    void Start()
    {
        _mpu6050.InitHardware();
        LastValue = new mpu6050.MpuSensorValue();
    }

    // Update is called once per frame
    void Update()
    {
        LastValue = _mpu6050.getLastValue();

        txt.text = string.Format("{0}, {1}, {2}", 
            LastValue.AccelerationX.ToString("0.00"), 
            LastValue.AccelerationY.ToString("0.00"), 
            LastValue.AccelerationZ.ToString("0.00")
            );
    }
}
