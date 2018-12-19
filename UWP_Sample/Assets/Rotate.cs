using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{

    void Update()
    {
        this.GetComponent<Transform>().Rotate(1.0f, 2.0f, 0.5f);
    }
}
