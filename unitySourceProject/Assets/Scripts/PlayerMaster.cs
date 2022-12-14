using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMaster : MonoBehaviourPunCallbacks
{
    [SerializeField] PhotonView view;
    [SerializeField] GameObject masterUI;
    [SerializeField] GameObject roomFloor;

    private float _r, _g, _b;

    void Start()
    {
        view = this.GetComponent<PhotonView>();
        roomFloor = GameObject.Find("RoomFloor");
    }

    void Update()
    {
        if (roomFloor == null) roomFloor = GameObject.Find("RoomFloor");
        updateUI();
    }

    void updateUI()
	{
        if (PhotonNetwork.IsMasterClient)
        {
            if (masterUI.activeInHierarchy == false) masterUI.SetActive(true);
        }
        else
        {
            if (masterUI.activeInHierarchy == true) masterUI.SetActive(false);
        }
    }

    public void changeFloorColor()
	{
        _r = Random.Range(0f, 1f);
        _g = Random.Range(0f, 1f);
        _b = Random.Range(0f, 1f);
        roomFloor.GetComponent<RoomFloor>().changefloorColor(_r, _g, _b);
    }
    public void changeMasterRandom()
	{
        Photon.Realtime.Player newMaster;
        if(PhotonNetwork.PlayerList.Length > 1)
		{
            while (true)
            {
                newMaster = PhotonNetwork.PlayerList[Random.Range(0, PhotonNetwork.PlayerList.Length)];
                if (newMaster != PhotonNetwork.MasterClient) break;
            }
            PhotonNetwork.SetMasterClient(newMaster);
            ReactUnity.sendMessageToUnity("[PlayerMaster] Player " + newMaster.NickName + " is now new room master.");
        } else {
            ReactUnity.sendMessageToUnity("[PlayerMaster] To change room master there must be at least 2 players in the room.");
        }
        
        
    }

    
}
