#include "Player.h"
#include "raylib.h"

Player::Player(){
    x = 400;
    y = 225;
}

void Player::Update(){
    if (IsKeyDown(KEY_W))
        y -= 4;
    if (IsKeyDown(KEY_S))
        y += 4;
    if (IsKeyDown(KEY_A))
        x -= 4;
    if (IsKeyDown(KEY_D))
        x += 4;
}