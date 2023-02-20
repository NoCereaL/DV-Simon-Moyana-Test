﻿/*
 * Author: Simon K Moyana
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;
using System.IO;
using Cinemachine;

public class RoomManager : MonoBehaviourPunCallbacks
{
	public static RoomManager Instance;

	public static GameObject myPlayer;
	public static GameObject myPlayer2;
	public static GameObject myPlayer3;

	[SerializeField] List<Transform> spawnpoints;

	void Awake()
	{
		if(Instance)
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
		if(scene.buildIndex == 1) // We're in the game scene
		{
			//PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "PlayerManager"), Vector3.zero, Quaternion.identity);
		}

		SpawnPlayer();

	}

	
	public void SpawnPlayer()
	{
		myPlayer = (GameObject)PhotonNetwork.Instantiate("Player", spawnpoints[Random.Range(0, spawnpoints.Capacity)].position, Quaternion.identity);
		myPlayer.GetComponent<PlayerMovement>().enabled = true;
		myPlayer.GetComponent<PlayerMovement>().cam.GetComponent<CinemachineFreeLook>().enabled = true;
		myPlayer.GetComponent<PlayerMovement>().serverName.enabled = true;
		myPlayer.GetComponent<PlayerMovement>().playerName = PhotonNetwork.LocalPlayer.NickName;
	}
}