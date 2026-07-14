#include "raylib.h"

int main(){
    InitWindow(800, 450, "My RPG");
    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("H!", 300, 200, 30, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}