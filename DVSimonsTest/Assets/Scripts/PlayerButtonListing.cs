using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;
using Photon.Realtime;

public class PlayerButtonListing : MonoBehaviourPunCallbacks
{
    public TextMeshProUGUI text;
    Player player;
    string thisName;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void SetUp(Player _player)
    {
        player = _player;
        text.text = _player.NickName;
        thisName = text.text;
        //text.text = MSKGameManager.Instance.players[_player.ActorNumber].GetComponent<PlayerMovement>().playerName;
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        if (player == otherPlayer)
        {
            Destroy(gameObject);
        }
    }

    public override void OnLeftRoom()
    {
        Destroy(gameObject);
    }

    public void ToggleMute()
    {
        foreach (GameObject player in MSKGameManager.Instance.players)
        {
            if (player.GetComponent<PlayerMovement>().playerName == text.text)
            {
                player.GetComponentInChildren<AudioSource>().volume = 0;
            }
        }
    }

    public void ToggleUnMute()
    {
        foreach (GameObject player in MSKGameManager.Instance.players)
        {
            if (player.GetComponent<PlayerMovement>().playerName == text.text)
            {
                player.GetComponentInChildren<AudioSource>().volume = 100;
            }
        }
    }
}
