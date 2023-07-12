#include "block.hpp"
#include "position.hpp"


class LBlock : public TetrisBlock
{
public:
    LBlock()
    {
        blockID = 1;
        cells[0] = {BlockPosition(0,2), BlockPosition(1,0), BlockPosition(1,1), BlockPosition(1,2)};
        cells[1] = {BlockPosition(0,1), BlockPosition(1,1), BlockPosition(2,1), BlockPosition(2,2)};
        cells[2] = {BlockPosition(1,0), BlockPosition(1,1), BlockPosition(1,2), BlockPosition(2,0)};
        cells[3] = {BlockPosition(0,0), BlockPosition(0,1), BlockPosition(1,1), BlockPosition(2,1)};


    }

};