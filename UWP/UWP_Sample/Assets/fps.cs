using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class fps : MonoBehaviour
{
    int frameCount;
    Text _txt;

    private void Awake()
    {
        Application.targetFrameRate = 20;
    }

    void Start()
    {
        frameCount = 0;
        _txt = this.GetComponent<Text>();
    }

    void Update()
    {
        frameCount++;
        _txt.text = frameCount.ToString();
    }
}
