#pragma once

#include <vector>
#include <map>
#include "position.hpp"
#include "colors.hpp"

class TetrisBlock
{
public:
    TetrisBlock();
    void Draw();
    int blockID;
    /*
    here we will define the type of blocks as map with 
    ID of type int and value of type vector containing a BlockPosition obj
    */
    std::map<int, std::vector<BlockPosition>> cells;
    
private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;


};
