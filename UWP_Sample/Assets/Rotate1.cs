using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate1 : MonoBehaviour
{
    void Update()
    {
        this.GetComponent<Transform>().Rotate(0.0f, 1.0f, 0.0f);
    }
}
