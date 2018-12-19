using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate1 : MonoBehaviour
{
    Transform _target;

    private void Start()
    {
        _target = GetComponent<Transform>();
    }

    void Update()
    {
        _target.Rotate(0.0f, 1.0f, 0.0f);
    }
}
