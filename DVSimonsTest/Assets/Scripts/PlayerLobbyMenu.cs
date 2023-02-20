using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using System.Linq;
using TMPro;
using UnityEngine.SceneManagement;

public class PlayerLobbyMenu : MonoBehaviourPunCallbacks
{
	[SerializeField] TMP_Text roomNameText;
	[SerializeField] public TextMeshProUGUI playerCount;
	[SerializeField] public Transform playerListContent;
	[SerializeField] public GameObject PlayerListItemPrefab;
	[HideInInspector] public Player[] players;
	public List<GameObject> playerInGameList;
	// Start is called before the first frame update
	void Start()
    {
		//UpdatePlayerList();
		//this.photonView.RPC("UpdatePlayerList", RpcTarget.AllBufferedViaServer);
	}

	// Update is called once per frame
	void Update()
    {
		players = PhotonNetwork.PlayerList;
		List<PlayerButtonListing> buttonListings;
		buttonListings = playerListContent.GetComponentsInChildren<PlayerButtonListing>().ToList<PlayerButtonListing>();
		if(buttonListings.Capacity != MSKGameManager.Instance.players.Capacity && buttonListings.Capacity <= MSKGameManager.Instance.players.Capacity)
        {
			UpdatePlayerList();
        }
	}

	public override void OnJoinedRoom()
	{
		MenuManager.Instance.OpenMenu("room");
		roomNameText.text = PhotonNetwork.CurrentRoom.Name;
		playerCount.text = PhotonNetwork.CurrentRoom.PlayerCount + "/8 - " + "Players";

		Player[] players = PhotonNetwork.PlayerList;

		foreach (Transform child in playerListContent)
		{
			Destroy(child.gameObject);
		}

		for (int i = 0; i < players.Count(); i++)
		{
			Instantiate(PlayerListItemPrefab, playerListContent).GetComponent<PlayerButtonListing>().SetUp(players[i]);
		}
		//UpdatePlayerList();
		this.photonView.RPC("UpdatePlayerList", RpcTarget.AllBufferedViaServer);

	}

	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
		playerCount.text = PhotonNetwork.CurrentRoom.PlayerCount + "/8 - " + "Players";
		Instantiate(PlayerListItemPrefab, playerListContent).GetComponent<PlayerButtonListing>().SetUp(newPlayer);
		//this.photonView.RPC("UpdatePlayerList", RpcTarget.AllBufferedViaServer);
		//UpdatePlayerList();
	}

	public void FillPlayerList()
    {
		for (int i = 0; i < MSKGameManager.Instance.players.Capacity; i++)
		{
			Instantiate(PlayerListItemPrefab, playerListContent).GetComponent<PlayerButtonListing>().SetUp(players[i]);
			playerInGameList.Add(playerListContent.GetComponentsInChildren<PlayerButtonListing>()[i].gameObject);
		}
	}

	[PunRPC]
	public void UpdatePlayerList()
    {
		for (int i = 0; i < MSKGameManager.Instance.players.Capacity; i++)
		{
			Instantiate(PlayerListItemPrefab, playerListContent).GetComponent<PlayerButtonListing>().SetUp(players[i]);
		}
	}

	public void LeaveRoom()
    {
		PhotonNetwork.LeaveRoom();
		Destroy(MSKGameManager.Instance.roomManager.gameObject);
		SceneManager.LoadScene(0);
	}
}
