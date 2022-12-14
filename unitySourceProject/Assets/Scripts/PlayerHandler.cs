using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHandler : MonoBehaviourPunCallbacks
{
    public GameObject playerPrefab;
	[SerializeField] GameObject playerObj;

	public static float maxX = 8f, minX = -8f, maxZ = 8f, minZ = -8f;

    private Vector3 startingPosition;

	private void Start()
	{
		startingPosition = new Vector3(Random.Range(minX, maxX), 1, Random.Range(minZ, maxZ));
		playerObj = PhotonNetwork.Instantiate(playerPrefab.name, startingPosition, Quaternion.identity);

		playerObj.GetComponent<Player>().enabled = true;
		playerObj.GetComponent<PlayerMaster>().enabled = true;
		playerObj.GetComponent<PlayerVoiceControl>().enabled = true;
	}
}
