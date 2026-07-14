#include "raylib.h"
#include "Config.h"
#include "states/GameStateManager.h"
 
int main() {
    InitWindow(Config::SCREEN_WIDTH, Config::SCREEN_HEIGHT, Config::GAME_TITLE.c_str());
    SetTargetFPS(Config::FPS);
 
    GameStateManager manager;
 
    while (!WindowShouldClose() && manager.isRunning()) {
        float dt = GetFrameTime();
 
        manager.handleInput();
        manager.update(dt);
 
        BeginDrawing();
        manager.render();
        EndDrawing();
    }
 
    CloseWindow();
    return 0;