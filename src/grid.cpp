#include "grid.hpp"
#include "colors.hpp"
#include <iostream>


Grid::Grid() 
{
    numRows = 20;
    numCols = 10;
    cellSize = 30;
    initialize();
    colors = getCellColors();

}

/*
Initialize all rows and cols of our 2D array to 0's
*/
void Grid::initialize()
{
    for(int row = 0; row < numRows; row++)
    {
        for(int col=0; col<numCols; col++)
        {
            grid[row][col] = 0;
        }
    }
}

/*
display our grid
*/
void Grid::printGrid()
{
    for(int row=0; row < numRows; row++)
    {
        for(int col=0; col<numCols; col++)
        {
            std::cout<<grid[row][col]<< " "; 
        }
        std::cout<<std::endl;
    }
}

/*
Here we are defining a method which will return 8 colors of type struct Color
and store them in a vector array
*/

/*
this method will be used to draw colors inside the grid

to draw a rectangle using raylib:

    void DrawRectangle(int posX, int posY, int width, int height, Color color);

*/
void Grid::drawColorInGrid()
{
    for(int row=0; row < numRows; row++)
    {
        for(int col=0; col<numCols; col++)
        {
            int cellValue = grid[row][col];
            DrawRectangle(col*cellSize+1, row*cellSize+1, cellSize-1, cellSize-1, colors[cellValue]);
        }
        
    }
}
