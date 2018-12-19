using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    Transform _target;

    private void Start()
    {
        _target = GetComponent<Transform>();
    }

    void Update()
    {
        _target.Rotate(1.0f, 2.0f, 0.5f);
    }
}
