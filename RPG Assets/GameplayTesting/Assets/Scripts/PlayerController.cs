using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    // public
    public float speed;

    // private
    private Rigidbody2D playerBody;
    private Vector2 vel;
    private Animator playerAnimation;

    // Use this for initialization
    void Start()
    {
        // velocity is 0 to initialize
        vel = new Vector2(0, 0);

        playerBody = GetComponent<Rigidbody2D>();
        playerAnimation = GetComponent<Animator>();
    }

    // Update on every frame
    void Update()
    {
        // animation cues
        if (Input.GetAxis("Jump") == 1) //evasion check
        {
            if (!playerAnimation.GetCurrentAnimatorStateInfo(0).IsTag("Evading")) // only evade if not currently doing so
            {
                playerAnimation.SetTrigger("Evade");
            }
        }

        if (!playerAnimation.GetCurrentAnimatorStateInfo(0).IsTag("Evading")) // show movement animations only if the player isn't evading
        {
            // decide if animation will be diagonal first
            if (vel.x != 0 && vel.y != 0)
            {
                playerAnimation.SetBool("MultiDir", true);
            }
            else
            {
                playerAnimation.SetBool("MultiDir", false);
            }

            // movement animations
            playerAnimation.SetFloat("xVelocity", vel.x);
            playerAnimation.SetFloat("yVelocity", vel.y);
        }

        // flag handling
        if(playerAnimation.GetCurrentAnimatorStateInfo(0).IsTag("Evading")) // give user half damage taken during evade and increased speed, but remove ability to do other things during
        {

        }
    }

    // Update when physics is used
    void FixedUpdate()
    {
        // get movement inputs
        float xMove = Input.GetAxis("Horizontal");
        float yMove = Input.GetAxis("Vertical");

        // velocity vector for movement
        vel = new Vector2(xMove, yMove);

        // move that thing in a not a janky physics way
        playerBody.MovePosition(playerBody.position + (vel * speed) * Time.fixedDeltaTime);
    }
}
