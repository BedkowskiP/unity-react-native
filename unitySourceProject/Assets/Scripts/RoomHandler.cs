using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomHandler : MonoBehaviourPunCallbacks
{
    public GameObject roomFloorPrefab;

    GameObject roomFloorObj;

    private Vector3 startingPosition = new Vector3(0,0,0);

    void Start()
    {
        roomFloorObj = GameObject.Find("RoomFloor");

        if (roomFloorObj == null) createRoomFloor();
    }

    void createRoomFloor()
	{
        roomFloorObj = PhotonNetwork.InstantiateRoomObject(roomFloorPrefab.name, startingPosition, Quaternion.identity);
	}
}
