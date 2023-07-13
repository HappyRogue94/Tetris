#include <raylib.h>
#include "grid.hpp"
#include "blocks.cpp"

#define WIDTH  600
#define HEIGHT 300
#define FRAME_RATE 60

int main()
{
   InitWindow(HEIGHT, WIDTH, "Tetris");
   SetTargetFPS(FRAME_RATE);
   Color darkBlue = {44, 44, 127, 255};
   
   Grid grid = Grid();
   grid.printGrid();

   TBlock block = TBlock();
   
   /*
    the WindowShouldClose will detect if escape key is pressed or the 
    exit button was pressed.
   */ 
   while(WindowShouldClose() == false)
    {
        BeginDrawing(); 
        ClearBackground(darkBlue);
        grid.drawColorInGrid();

        block.Draw();
        EndDrawing();

    }

   CloseWindow();
}