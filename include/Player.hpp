#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "../include/MovieClip.hpp"
#include "../include/Debug.hpp"

class Player : public MovieClip {
public:
    Player(Keyboard::Key j, Keyboard::Key l, Keyboard::Key r);
    void  onUpdate(float dt) override;

private:

    float xSpeed, ySpeed;
    bool canJump;

    void hitFloor(float height);
    void jump();

    void onKeyDown(PEvent &e);

    static float maxRunSpeed, maxJumpSpeed, gravity, friction;
    Keyboard::Key jumpKey, leftKey, rightKey;
};

#endif // PLAYER_HPP