/*
 * Author: Simon K Moyana
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    [HideInInspector] public GameObject player;
    [HideInInspector] public Rigidbody rb;
    public Transform cam;
    public Transform lookPosition;
    public int speed;
    public int maxVelocity;
    public Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        player = this.gameObject;
        rb = this.gameObject.GetComponent<Rigidbody>();
        animator = this.gameObject.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        PlayerRotation();
        //Movement();
        CharacterController();
    }

    public void Movement()
    {
        Vector3 vec = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
        player.transform.position += vec * Time.deltaTime * speed;
        animator.SetFloat("SpeedX", Input.GetAxis("Horizontal"));
        animator.SetFloat("SpeedZ", Input.GetAxis("Vertical"));
        /*animator.SetFloat("InputHorizontal", Input.GetAxis("Horizontal"));
        animator.SetFloat("InputVertical", Input.GetAxis("Vertical"));
        animator.SetFloat("RotationMagnitude", player.transform.rotation.normalized.y);*/
    }

    public void CharacterController()
    {
        Vector3 direction = player.transform.forward * Input.GetAxis("Vertical") + player.transform.right * Input.GetAxis("Horizontal");
        if (rb.velocity.magnitude <= maxVelocity)
        {
            rb.AddForce(direction.normalized * speed, ForceMode.Force);
        }
        animator.SetFloat("SpeedX", Input.GetAxis("Horizontal"));
        animator.SetFloat("SpeedZ", Input.GetAxis("Vertical"));
        animator.SetFloat("H_Velocity", rb.velocity.magnitude);
    }

    public void CameraFollowPosition()
    {
        Vector3 position = new Vector3(player.transform.position.x, player.transform.position.y + 3, player.transform.position.z - 5);
        cam.position = position;
        //Vector3.Lerp(cam.position, position, 0.5f);

    }

    public void PlayerRotation()
    {
        //player.transform.rotation = Quaternion.Euler(new Vector3(player.transform.rotation.x, cam.rotation.normalized.y * 180, player.transform.rotation.z));
        //Vector3 lookDirection = player.transform.forward * Input.GetAxis("Vertical") + player.transform.right * Input.GetAxis("Horizontal");
        //player.transform.forward = Vector3.Slerp(player.transform.forward, lookDirection, Time.deltaTime * 7);
        //player.transform.LookAt(new Vector3(cam.transform.position.x,0, cam.transform.position.z));
        player.transform.LookAt(new Vector3(lookPosition.position.x,0, lookPosition.position.z));

    }


}
