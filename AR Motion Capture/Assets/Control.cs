using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System.Threading;
using System;

public class Control : MonoBehaviour
{
    public Animator animator;
    List<string> lines;
    int counter = 0;


    void Start()
    {
        // Read the positions from the text file
        lines = System.IO.File.ReadLines("Assets/AnimationFile.txt").ToList();
        
    }


  void Update () {
        // Split the line into an array of strings
        string[] parts = lines[counter].Split(',');

        string boneName = "Hips";

        Vector3 position = new Vector3((float.Parse(parts[72], System.Globalization.CultureInfo.InvariantCulture) + float.Parse(parts[69], System.Globalization.CultureInfo.InvariantCulture))/2,
                                        -(float.Parse(parts[73], System.Globalization.CultureInfo.InvariantCulture) + float.Parse(parts[70], System.Globalization.CultureInfo.InvariantCulture))/2,
                                        (float.Parse(parts[74], System.Globalization.CultureInfo.InvariantCulture) + float.Parse(parts[71], System.Globalization.CultureInfo.InvariantCulture))/2);

            // Get the HumanBodyBones enum value for the bone name
            HumanBodyBones bone = (HumanBodyBones)System.Enum.Parse(typeof(HumanBodyBones), boneName);

            // Get the transform of the bone
            Transform boneTransform = animator.GetBoneTransform(bone);
            // Set the position and rotation of the bone
            boneTransform.SetPositionAndRotation(position, Quaternion.identity);
            //Vector3 localCoordinate = boneTransform.parent.InverseTransformPoint(position);
            // Set the position of the joint to the local coordinate
            //boneTransform.localPosition = localCoordinate;

        boneName = "LeftUpperLeg";
        // Get the position from the array
        position = new Vector3(float.Parse(parts[69], System.Globalization.CultureInfo.InvariantCulture), 
                                -float.Parse(parts[70], System.Globalization.CultureInfo.InvariantCulture), 
                                float.Parse(parts[71], System.Globalization.CultureInfo.InvariantCulture));


            // Get the HumanBodyBones enum value for the bone name
            bone = (HumanBodyBones)System.Enum.Parse(typeof(HumanBodyBones), boneName);

            // Get the transform of the bone
            boneTransform = animator.GetBoneTransform(bone);
            // Set the position and rotation of the bone
            boneTransform.SetPositionAndRotation(position, Quaternion.identity);
            //Vector3 localCoordinate = boneTransform.parent.InverseTransformPoint(position);
            // Set the position of the joint to the local coordinate
            //boneTransform.localPosition = localCoordinate;

 boneName = "RightUpperLeg";
        // Get the position from the array
        position = new Vector3(float.Parse(parts[72], System.Globalization.CultureInfo.InvariantCulture), 
                                            -float.Parse(parts[73], System.Globalization.CultureInfo.InvariantCulture), 
                                            float.Parse(parts[74], System.Globalization.CultureInfo.InvariantCulture));


            // Get the HumanBodyBones enum value for the bone name
            bone = (HumanBodyBones)System.Enum.Parse(typeof(HumanBodyBones), boneName);

            // Get the transform of the bone
            boneTransform = animator.GetBoneTransform(bone);
            // Set the position and rotation of the bone
            boneTransform.SetPositionAndRotation(position, Quaternion.identity);
            //Vector3 localCoordinate = boneTransform.parent.InverseTransformPoint(position);
            // Set the position of the joint to the local coordinate
            //boneTransform.localPosition = localCoordinate;

        
         boneName = "LeftUpperArm";
        // Get the position from the array
        position = new Vector3(float.Parse(parts[33], System.Globalization.CultureInfo.InvariantCulture), 
                                            -float.Parse(parts[34], System.Globalization.CultureInfo.InvariantCulture), 
                                            float.Parse(parts[35], System.Globalization.CultureInfo.InvariantCulture));


            // Get the HumanBodyBones enum value for the bone name
            bone = (HumanBodyBones)System.Enum.Parse(typeof(HumanBodyBones), boneName);

            // Get the transform of the bone
            boneTransform = animator.GetBoneTransform(bone);
            // Set the position and rotation of the bone
            boneTransform.SetPositionAndRotation(position, Quaternion.identity);
            //Vector3 localCoordinate = boneTransform.parent.InverseTransformPoint(position);
            // Set the position of the joint to the local coordinate
            //boneTransform.localPosition = localCoordinate;


        boneName = "LeftLowerArm";
        // Get the position from the array
        position = new Vector3(float.Parse(parts[39], System.Globalization.CultureInfo.InvariantCulture), 
                                            -float.Parse(parts[40], System.Globalization.CultureInfo.InvariantCulture), 
                                            float.Parse(parts[41], System.Globalization.CultureInfo.InvariantCulture));


            // Get the HumanBodyBones enum value for the bone name
            bone = (HumanBodyBones)System.Enum.Parse(typeof(HumanBodyBones), boneName);

           // Get the transform of the bone
            boneTransform = animator.GetBoneTransform(bone);
            // Set the position and rotation of the bone
            boneTransform.SetPositionAndRotation(position, Quaternion.identity);
            //Vector3 localCoordinate = boneTransform.parent.InverseTransformPoint(position);
            // Set the position of the joint to the local coordinate
            //boneTransform.localPosition = localCoordinate;


         boneName = "RightUpperArm";
        // Get the position from the array
        position = new Vector3(float.Parse(parts[36], System.Globalization.CultureInfo.InvariantCulture), 
                                            -float.Parse(parts[37], System.Globalization.CultureInfo.InvariantCulture), 
                                            float.Parse(parts[38], System.Globalization.CultureInfo.InvariantCulture));


            // Get the HumanBodyBones enum value for the bone name
            bone = (HumanBodyBones)System.Enum.Parse(typeof(HumanBodyBones), boneName);

            // Get the transform of the bone
            boneTransform = animator.GetBoneTransform(bone);
            // Set the position and rotation of the bone
            boneTransform.SetPositionAndRotation(position, Quaternion.identity);
            //Vector3 localCoordinate = boneTransform.parent.InverseTransformPoint(position);
            // Set the position of the joint to the local coordinate
            //boneTransform.localPosition = localCoordinate;


        boneName = "RightLowerArm";
        // Get the position from the array
        position = new Vector3(float.Parse(parts[42], System.Globalization.CultureInfo.InvariantCulture), 
                                            -float.Parse(parts[43], System.Globalization.CultureInfo.InvariantCulture), 
                                            float.Parse(parts[44], System.Globalization.CultureInfo.InvariantCulture));


            // Get the HumanBodyBones enum value for the bone name
            bone = (HumanBodyBones)System.Enum.Parse(typeof(HumanBodyBones), boneName);

            // Get the transform of the bone
            boneTransform = animator.GetBoneTransform(bone);
            // Set the position and rotation of the bone
            boneTransform.SetPositionAndRotation(position, Quaternion.identity);
            //Vector3 localCoordinate = boneTransform.parent.InverseTransformPoint(position);
            // Set the position of the joint to the local coordinate
            //boneTransform.localPosition = localCoordinate;


        boneName = "LeftLowerLeg";
        // Get the position from the array
        position = new Vector3(float.Parse(parts[75], System.Globalization.CultureInfo.InvariantCulture), 
                                            -float.Parse(parts[76], System.Globalization.CultureInfo.InvariantCulture), 
                                            float.Parse(parts[77], System.Globalization.CultureInfo.InvariantCulture));


            // Get the HumanBodyBones enum value for the bone name
            bone = (HumanBodyBones)System.Enum.Parse(typeof(HumanBodyBones), boneName);

            // Get the transform of the bone
            boneTransform = animator.GetBoneTransform(bone);
            // Set the position and rotation of the bone
            boneTransform.SetPositionAndRotation(position, Quaternion.identity);
            //Vector3 localCoordinate = boneTransform.parent.InverseTransformPoint(position);
            // Set the position of the joint to the local coordinate
            //boneTransform.localPosition = localCoordinate;


    counter += 1;
    if (counter == lines.Count) { counter = 0; }
    Thread.Sleep(35);
    
    }
}