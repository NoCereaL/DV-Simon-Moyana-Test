using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    [HideInInspector] public GameObject player;
    public Transform cam;
    public int speed;
    public Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        player = this.gameObject;
        animator = this.gameObject.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        Movement();
        CameraFollowPosition();
    }

    public void Movement()
    {
        Vector3 vec = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
        player.transform.position += vec * Time.deltaTime * speed;
        animator.SetFloat("SpeedX", Input.GetAxis("Horizontal"));
        animator.SetFloat("SpeedZ", Input.GetAxis("Vertical"));
    }

    public void CameraFollowPosition()
    {
        Vector3 position = new Vector3(player.transform.position.x, player.transform.position.y + 3, player.transform.position.z - 5);
        cam.position = position;
        //Vector3.Lerp(cam.position, position, 0.5f);

    }
}
