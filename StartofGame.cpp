#include "raylib.h"

enum GameState {
    MENU,
    PLAYING
};

void drawMenu();
void drawGame();


int main()
{
    InitWindow(800, 600, "Cave of Shadows");

    SetTargetFPS(60);

    GameState state = MENU;


    while (!WindowShouldClose())
    {

        // INPUT
        if(state == MENU)
        {
            if(IsKeyPressed(KEY_ENTER))
            {
                state = PLAYING;
            }
        }


        // DRAW
        BeginDrawing();

        ClearBackground(BLACK);


        if(state == MENU)
        {
            drawMenu();
        }

        else if(state == PLAYING)
        {
            drawGame();
        }


        EndDrawing();
    }


    CloseWindow();

    return 0;
}



void drawMenu()
{

    DrawText("=================================", 170, 120, 20);

    DrawText("       CAVE OF SHADOWS", 190, 160, 35);

    DrawText("=================================", 170, 210, 20);


    DrawText("1) START GAME", 280, 300, 25);

    DrawText("2) QUIT", 330, 350, 25);


    DrawText("Press ENTER to begin", 250, 450, 20);

}



void drawGame()
{

    DrawText("Darkness...", 300, 150, 30);

    DrawText("You slowly open your eyes.", 220, 220, 25);

    DrawText("You awaken inside a damp cave.", 180, 270, 25);

    DrawText("Water drips from the ceiling...", 220, 320, 25);

}