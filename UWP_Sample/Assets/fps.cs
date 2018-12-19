﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class fps : MonoBehaviour
{
    int frameCount;
    float prevTime;

    private void Awake()
    {
    // Application.targetFrameRate = 20;
    }

    void Start()
    {
        frameCount = 0;
        prevTime = 0.0f;
    }

    void Update()
    {
        ++frameCount;
        float time = Time.realtimeSinceStartup - prevTime;

        if (time >= 0.5f)
        {
            this.GetComponent<Text>().text = (frameCount / time).ToString("0.00");

            frameCount = 0;
            prevTime = Time.realtimeSinceStartup;
        }
    }
}