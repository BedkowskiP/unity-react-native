using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Player : MonoBehaviourPunCallbacks
{
    [SerializeField] string[] playerColor;
    [SerializeField] float _r, _g, _b;
    [SerializeField] PhotonView view;
    
    private Vector3 newPosition;

    [SerializeField] GameObject playerUI;
    [SerializeField] GameObject playerCam;
    [SerializeField] GameObject playerNickNameDisplay;

	void Start()
    {
        playerCam.SetActive(true);
        playerUI.SetActive(true);
        view = this.GetComponent<PhotonView>();
        playerColor = ReactUnity.player.playerColor.Split(',');
        view.Owner.NickName = ReactUnity.player.playerName;
        view.RPC("changeObjectNameRPC", RpcTarget.AllBuffered);
        changePlayerColor(true);
    }

	private void Update()
	{
        changeTag();
	}

	private void changeTag()
    {
        if (PhotonNetwork.IsMasterClient) {
            if (this.gameObject.tag != "Master")
                view.RPC("changeTagRPC", RpcTarget.AllBuffered, "Master");
        } else {
            if (this.gameObject.tag != "Player")
                view.RPC("changeTagRPC", RpcTarget.AllBuffered, "Player");
        }
    }

    public void move()
	{
        if (view.IsMine)
        {
            newPosition = new Vector3(Random.Range(PlayerHandler.minX, PlayerHandler.maxX), 1, Random.Range(PlayerHandler.minZ, PlayerHandler.maxZ));
            this.transform.position = newPosition;
        }
	}

    public void changePlayerColor(bool firstColoring)
	{
		if (firstColoring)
		{
            this._r = float.Parse(playerColor[0]);
            this._g = float.Parse(playerColor[1]);
            this._b = float.Parse(playerColor[2]);
        } else {
            this._r = Random.Range(0f, 1f);
            this._g = Random.Range(0f, 1f);
            this._b = Random.Range(0f, 1f);
        }
        view.RPC("changePlayerColorRPC", RpcTarget.AllBuffered, _r, _g, _b);
	}
    #region rpc
    [PunRPC]
    public void changePlayerColorRPC(float _r, float _g, float _b)
    {
        this.GetComponent<Renderer>().material.color = new Color(_r, _g, _b);
        ReactUnity.player.playerColor = this._r + "," + this._g + "," + this._b;

    }
    [PunRPC]
    public void changeObjectNameRPC()
    {
        this.name = this.view.Owner.NickName;
        this.playerNickNameDisplay.GetComponent<TextMeshPro>().text = this.view.Owner.NickName;
    }
    [PunRPC]
    public void changeTagRPC(string tag)
	{
        this.gameObject.tag = tag;
	}
	#endregion
}
