#include "block.hpp"
#include "position.hpp"


class LBlock : public TetrisBlock
{
public:
/*
Define constructor of LBlock which inherits from TetrisBlock
*/
    LBlock()
    {
        /*
        the blockID indicates the color of the block, it will be used 
        as an index to index the colors vector.
        */
        blockID = 1;
        /*
        define possible rotation states of the LBlock 
        */
        cells[0] = {BlockPosition(0,2), BlockPosition(1,0), BlockPosition(1,1), BlockPosition(1,2)};
        cells[1] = {BlockPosition(0,1), BlockPosition(1,1), BlockPosition(2,1), BlockPosition(2,2)};
        cells[2] = {BlockPosition(1,0), BlockPosition(1,1), BlockPosition(1,2), BlockPosition(2,0)};
        cells[3] = {BlockPosition(0,0), BlockPosition(0,1), BlockPosition(1,1), BlockPosition(2,1)};
    }

};

class JBlock : public TetrisBlock
{
public:
    JBlock()
    {
        blockID = 2;
        cells[0] = {BlockPosition(0,0), BlockPosition(1,0), BlockPosition(1,1), BlockPosition(1,2)};
        cells[1] = {BlockPosition(0,1), BlockPosition(0,2), BlockPosition(1,1), BlockPosition(2,1)};
        cells[2] = {BlockPosition(1,0), BlockPosition(1,1), BlockPosition(1,2), BlockPosition(2,2)};
        cells[3] = {BlockPosition(0,1), BlockPosition(1,1), BlockPosition(2,0), BlockPosition(2,1)};
    }


};

class IBlock : public TetrisBlock
{
public:
    IBlock()
    {
        blockID = 3;
        cells[0] = {BlockPosition(1,0), BlockPosition(1,1), BlockPosition(1,2), BlockPosition(1,3)};
        cells[1] = {BlockPosition(0,2), BlockPosition(1,2), BlockPosition(2,2), BlockPosition(3,2)};
        cells[2] = {BlockPosition(2,0), BlockPosition(2,1), BlockPosition(2,2), BlockPosition(2,3)};
        cells[3] = {BlockPosition(0,1), BlockPosition(1,1), BlockPosition(2,1), BlockPosition(3,1)};

    }
};

class OBlock : public TetrisBlock
{
public:
    OBlock()
    {
        blockID = 4;
        cells[0] = {BlockPosition(0,0), BlockPosition(0,1), BlockPosition(1,0), BlockPosition(1,1)};
        cells[1] = {BlockPosition(0,0), BlockPosition(0,1), BlockPosition(1,0), BlockPosition(1,1)};
        cells[2] = {BlockPosition(0,0), BlockPosition(0,1), BlockPosition(1,0), BlockPosition(1,1)};
        cells[3] = {BlockPosition(0,0), BlockPosition(0,1), BlockPosition(1,0), BlockPosition(1,1)};

    }


};

class SBlock : public TetrisBlock
{
public:
    SBlock()
    {
        blockID = 5;
        cells[0] = {BlockPosition(0,1), BlockPosition(0,2), BlockPosition(1,0), BlockPosition(1,1)};
        cells[1] = {BlockPosition(0,1), BlockPosition(1,1), BlockPosition(1,2), BlockPosition(2,2)};
        cells[2] = {BlockPosition(1,1), BlockPosition(1,2), BlockPosition(2,0), BlockPosition(2,1)};
        cells[3] = {BlockPosition(0,0), BlockPosition(1,0), BlockPosition(1,1), BlockPosition(2,1)};

    }


};

class TBlock : public TetrisBlock
{
public:
    TBlock()
    {
        blockID = 6;
        cells[0] = {BlockPosition(0,1), BlockPosition(1,0), BlockPosition(1,1), BlockPosition(1,2)};
        cells[1] = {BlockPosition(0,1), BlockPosition(1,1), BlockPosition(1,2), BlockPosition(2,1)};
        cells[2] = {BlockPosition(1,0), BlockPosition(1,1), BlockPosition(1,2), BlockPosition(2,1)};
        cells[3] = {BlockPosition(0,1), BlockPosition(1,0), BlockPosition(1,1), BlockPosition(2,1)};

    }


};

class TBlock : public TetrisBlock
{
public:
    TBlock()
    {
        blockID = 6;
        cells[0] = {BlockPosition(0,0), BlockPosition(0,1), BlockPosition(1,1), BlockPosition(1,2)};
        cells[1] = {BlockPosition(0,2), BlockPosition(1,1), BlockPosition(1,2), BlockPosition(2,1)};
        cells[2] = {BlockPosition(1,0), BlockPosition(1,1), BlockPosition(2,1), BlockPosition(2,2)};
        cells[3] = {BlockPosition(0,1), BlockPosition(1,0), BlockPosition(1,1), BlockPosition(2,0)};

    }


};