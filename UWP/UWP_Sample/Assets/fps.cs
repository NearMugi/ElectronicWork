using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class fps : MonoBehaviour
{
    [SerializeField]
    Text _txt;

    int frameCount;
    float prevTime;

    int _cnt;
    string _d;
    string _fps;
    private void Awake()
    {
        Application.targetFrameRate = 30;
    }

    void Start()
    {
        frameCount = 0;
        prevTime = 0.0f;
        _cnt = 0;
    }

    void Update()
    {
        _cnt++;
        frameCount++;
        float time = Time.realtimeSinceStartup - prevTime;

        if (time >= 0.5f)
        {
            _fps = (frameCount / time).ToString("0.00");

            frameCount = 0;
            prevTime = Time.realtimeSinceStartup;
        }

        _d = string.Empty;
        _d = _cnt.ToString();
        _d += "\n";
        _d += _fps;
        _txt.text = _d;

    }
}
