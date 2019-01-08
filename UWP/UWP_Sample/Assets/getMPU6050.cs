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

    // Start is called before the first frame update
    void Start()
    {
        _mpu6050.InitHardware();
        _mpu6050.LastValues.AccelerationX = 0.00f;
        _mpu6050.LastValues.AccelerationY = 0.00f;
        _mpu6050.LastValues.AccelerationZ = 0.00f;
    }

    // Update is called once per frame
    void Update()
    {
        txt.text = string.Format("{0}, {1}, {2}", 
            _mpu6050.LastValues.AccelerationX.ToString("0.00"), 
            _mpu6050.LastValues.AccelerationY.ToString("0.00"), 
            _mpu6050.LastValues.AccelerationZ.ToString("0.00")
            );
    }
}
