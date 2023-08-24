#pragma once
#include "grid.hpp"
#include "blocks.cpp"

class Game {
public:
    Game();
    TetrisBlock GetRandomBlock();
    Grid grid;

private:
    std::vector<TetrisBlock> blocks;

};