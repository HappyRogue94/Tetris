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
    std::vector<BlockPosition> tiles = cells[rotationState];

    /*
    this loop will draw each box one by one until the final shape is completely
    drawn based on the shape of the block provided in the blocks.cpp class
    */
    for(BlockPosition item: tiles)
    {
        DrawRectangle(item.column * cellSize+1, item.row * cellSize +1, cellSize -1, cellSize - 1, colors[blockID]);
    }
}