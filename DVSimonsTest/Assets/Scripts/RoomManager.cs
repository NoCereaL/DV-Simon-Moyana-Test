/*
 * Author: Simon K Moyana
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;
using System.IO;
using Cinemachine;
using TMPro;
using Photon.Realtime;

public class RoomManager : MonoBehaviourPunCallbacks
{
	public static RoomManager Instance;

	public static GameObject myPlayer;
	public static GameObject myPlayer2;
	public static GameObject myPlayer3;

	public TextMeshProUGUI notifyText;
	[SerializeField] List<Transform> spawnpoints;

	void Awake()
	{
		if (Instance)
		{
			Destroy(gameObject);
			return;
		}
		DontDestroyOnLoad(gameObject);
		Instance = this;
	}

	public override void OnEnable()
	{
		base.OnEnable();
		SceneManager.sceneLoaded += OnSceneLoaded;
	}

	public override void OnDisable()
	{
		base.OnDisable();
		SceneManager.sceneLoaded -= OnSceneLoaded;
	}

	void OnSceneLoaded(Scene scene, LoadSceneMode loadSceneMode)
	{
		if (scene.buildIndex == 1) // We're in the game scene
		{
			//PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "PlayerManager"), Vector3.zero, Quaternion.identity);
		}

		SpawnPlayer();

	}


	public void SpawnPlayer()
	{
		myPlayer = (GameObject)PhotonNetwork.Instantiate("Player", spawnpoints[Random.Range(0, spawnpoints.Capacity)].position, Quaternion.identity);
		if (myPlayer != null)
		{
			myPlayer.GetComponent<PlayerMovement>().enabled = true;
			myPlayer.GetComponent<PlayerMovement>().cam.GetComponent<Camera>().enabled = true;
			myPlayer.GetComponent<PlayerMovement>().cam.GetComponent<CinemachineFreeLook>().enabled = true;
			myPlayer.GetComponent<PlayerMovement>().serverName.enabled = true;
			myPlayer.GetComponent<PlayerMovement>().playerName = PhotonNetwork.LocalPlayer.NickName;
			myPlayer.GetComponent<PlayerMovement>().playerID = PhotonNetwork.LocalPlayer.ActorNumber;
			MSKGameManager.Instance.roomManager = this.gameObject.GetComponent<RoomManager>();
			//MSKGameManager.Instance.players.Add(myPlayer);
		}
	}

	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
		this.photonView.RPC("NotifyPlayer", RpcTarget.AllBufferedViaServer, newPlayer.NickName);
		//this.photonView.RPC("UpdatePlayerList", RpcTarget.AllBufferedViaServer);
	}

	public override void OnPlayerLeftRoom(Player newPlayer)
	{
		this.photonView.RPC("NotifyPlayerLeft", RpcTarget.AllBufferedViaServer, newPlayer.NickName);
	}

	[PunRPC]
	void NotifyPlayer(string playerName)
	{
		StopCoroutine("DisableNotifyAnim");
		notifyText.gameObject.SetActive(false);
		notifyText.text = playerName + " Joined the Lobby";
		notifyText.gameObject.SetActive(true);
		StartCoroutine(DisableNotifyAnim());
	}

	[PunRPC]
	void NotifyPlayerLeft(string playerName)
	{
		StopCoroutine("DisableNotifyAnim");
		notifyText.gameObject.SetActive(false);
		notifyText.text = playerName + " Left the Lobby";
		notifyText.gameObject.SetActive(true);
		StartCoroutine(DisableNotifyAnim());
	}

	[PunRPC]
	public void UpdatePlayerList()
	{
		for (int i = 0; i < MSKGameManager.Instance.players.Capacity; i++)
		{
			Instantiate(MSKGameManager.Instance.playerLobbyMenu.PlayerListItemPrefab, MSKGameManager.Instance.playerLobbyMenu.playerListContent).GetComponent<PlayerButtonListing>().SetUp(MSKGameManager.Instance.playerLobbyMenu.players[i]);
		}
	}

	IEnumerator DisableNotifyAnim()
    {
		yield return new WaitForSeconds(6);
		notifyText.gameObject.SetActive(false);
	}

	
}