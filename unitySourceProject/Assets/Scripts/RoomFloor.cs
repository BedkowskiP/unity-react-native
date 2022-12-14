using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomFloor : MonoBehaviour
{
	[SerializeField] PhotonView view;
	private void Awake()
	{
		view = this.GetComponent<PhotonView>();
		view.RPC("changeRoomFloorNameRPC", RpcTarget.AllBuffered);
	}

	public void changefloorColor(float _r, float _g, float _b)
	{
		this.view.RPC("changeFloorColorRPC", RpcTarget.AllBuffered, _r, _g, _b);
	}

	[PunRPC]
	public void changeRoomFloorNameRPC()
	{
		this.name = "RoomFloor";
	}

	[PunRPC]
	public void changeFloorColorRPC(float _r, float _g, float _b)
	{
		this.GetComponentInChildren<Renderer>().material.color = new Color(_r, _g, _b);
	}
}
