#include "block.hpp"

TetrisBlock::TetrisBlock()
{
    cellSize      = 30;
    rotationState = 0;
    colors        = getCellColors();
    row_offset    = 0;
    col_offset    = 0;
}

void TetrisBlock::Draw()

/*
This method is called when attemting to draw any block;
for example to draw an Lblock 
*/
{
    std::vector<BlockPosition> tiles = getCellPositions();

    /*
    this loop will draw each box one by one until the final shape is completely
    drawn based on the shape of the block provided in the blocks.cpp class
    */
    for(BlockPosition item: tiles)
    {
        DrawRectangle(item.column * cellSize+1, item.row * cellSize +1, cellSize -1, cellSize - 1, colors[blockID]);
    }
}

void TetrisBlock::Move(int rows, int cols)
/*
This method adds an offset to the position of the tetris block so
that they can be moved later. 
*/
{
    row_offset += rows;
    col_offset += cols;

}

std::vector<BlockPosition> TetrisBlock::getCellPositions()
{
/*
this method is used to get the new positions of the tetris block after its been moved.
*/
     std::vector<BlockPosition> tiles = cells[rotationState];

     std::vector<BlockPosition> movedTiles;
     for(BlockPosition item: tiles)
     {
        BlockPosition newPos = BlockPosition(item.row + row_offset, item.column + col_offset);
        movedTiles.push_back(newPos);

        
     }
     return movedTiles;
}