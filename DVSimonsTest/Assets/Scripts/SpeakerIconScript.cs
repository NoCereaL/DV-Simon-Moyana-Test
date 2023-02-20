/*
 * Author: Simon K Moyana
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Voice;
using Photon.Pun;
using Photon.Voice.Unity;

public class SpeakerIconScript : MonoBehaviour
{
    public GameObject speakerIcon;
    private Speaker speaker;
    private AudioSource audioSource;
    // Start is called before the first frame update
    void Start()
    {
        speaker = this.gameObject.GetComponent<Speaker>();
        audioSource = this.gameObject.GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        ShowSpeakerIcon();
    }

    public void ShowSpeakerIcon()
    {
        if (speaker.IsPlaying)
        {
            speakerIcon.SetActive(true);
        }
        else
        {
            speakerIcon.SetActive(false);
        }
    }
}
