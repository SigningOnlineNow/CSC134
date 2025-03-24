3/19/25

We'll need to:
- Decide on a screen size 
- Decide what we're repeating (rectangle, png, etc.)
- Create a loop to draw a ROW of them
- Create a nested loop to draw a GRID (rows and columns) of them

    Color colors[MAX_COLORS_COUNT] = {
        DARKGRAY, MAROON, ORANGE, DARKGREEN, DARKBLUE, DARKPURPLE, DARKBROWN,
        GRAY, RED, GOLD, LIME, BLUE, VIOLET, BROWN, LIGHTGRAY, PINK, YELLOW,
        GREEN, SKYBLUE, PURPLE, BEIGE };

********************************************************************************************/

#include "raylib.h"

// Draw one critter
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, Color color1, Color color2); 

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;
    // The item I'm drawing
    int tile_width = 80;
    int tile_height = 60;
    Color color1 = MAROON;
    Color color2 = GOLD;
    int c_x = 0;
    int c_y = 0;               // current location of critter

    InitWindow(screenWidth, screenHeight, "m4t2 - raylib example");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        c_x += 1;
        c_y += 1;
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);
            // Draw our critter 
            DrawCritter(c_x, c_y, tile_width, tile_height, color1, color2);



        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

// Other function definitions here
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, Color color1, Color color2) {
            // draw the body
            DrawRectangle(c_x, c_y, tile_width, tile_height, color1);
            // place the eyes
            int left_x = c_x + (tile_width / 4);        // 1/4 across
            int left_y = c_y + 10;
            int right_x = c_x + (3 * tile_width / 4);    // 3/4 across
            int right_y = c_y + 10;
            DrawRectangle(left_x, left_y, 10, 10, color2);
            DrawRectangle(right_x, right_y, 10, 10, color2);
}