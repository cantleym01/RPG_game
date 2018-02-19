using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    //player object
    public GameObject player;

    //offset distance between player and camera
    private Vector3 offset;

    // Use this for initialization
    void Start()
    {
        //Calculate the offset value by getting the distance between the player's position and camera's position.
        offset = transform.position - player.transform.position;
    }

    // LateUpdate is called after Update each frame
    void LateUpdate()
    {
        // Follow the player's position with the offset
        transform.position = player.transform.position + offset;
    }
}
