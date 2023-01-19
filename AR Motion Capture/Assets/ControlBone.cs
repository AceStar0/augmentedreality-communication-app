using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System.Threading;
using System;

public class ControlBone : MonoBehaviour
{

    List<string> lines;
    int counter = 0;

    public Transform[] joints;
    public Transform[] spheres;
    Vector3[] landmarks;    


    void Start()
    {
        lines = System.IO.File.ReadLines("Assets/AnimationFileWorld.txt").ToList();
    }

    void Update()
    {
        landmarks = new Vector3[34];
        string[] parts = lines[counter].Split(',');

        for (int i = 0; i < (parts.Length-1)/3; i++)
        {
            landmarks[i] = new Vector3(float.Parse(parts[3*i], System.Globalization.CultureInfo.InvariantCulture)*10,
                                        -float.Parse(parts[(3*i)+1], System.Globalization.CultureInfo.InvariantCulture)*10,
                                        float.Parse(parts[(3*i)+2], System.Globalization.CultureInfo.InvariantCulture)*10);

        }
        landmarks[33] = new Vector3(10*(float.Parse(parts[72], System.Globalization.CultureInfo.InvariantCulture) + float.Parse(parts[69], System.Globalization.CultureInfo.InvariantCulture))/2,
                                    10*(float.Parse(parts[73], System.Globalization.CultureInfo.InvariantCulture) + float.Parse(parts[70], System.Globalization.CultureInfo.InvariantCulture))/2,
                                    10*(float.Parse(parts[74], System.Globalization.CultureInfo.InvariantCulture) + float.Parse(parts[71], System.Globalization.CultureInfo.InvariantCulture))/2);
       

        for (int i = 0; i < 34; i++)
        {

            //llPosition = joints[i].parent.InverseTransformPoint(landmarks[i]);
            //joints[i].localPosition = llPosition;
            //joints[i].localRotation = transforms[i].rotation;

            //joints[i].SetParent(joints[i].parent.transform, true);
            //joints[i].rotation = Quaternion.LookRotation(spheres[i].position - joints[i].position);
            //Debug.DrawRay(joints[i].position, spheres[i].position - joints[i].position, Color.green);

            joints[i].position = landmarks[i];

        }

        counter += 1;
        if (counter == lines.Count) { counter = 0; }
        Thread.Sleep(35);
    }
}

