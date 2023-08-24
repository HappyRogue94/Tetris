#include "game.hpp"
#include <random>


Game::Game()
{
    grid = Grid();
    blocks = getAllBlocks();
    currentBlock = GetRandomBlock();
    nextBlock = GetRandomBlock();
}

TetrisBlock Game::GetRandomBlock()
{
    if (blocks.empty())
    {
        blocks = getAllBlocks();
    }
    int randomIdx = rand() % blocks.size(); 
    TetrisBlock block = blocks[randomIdx];
    blocks.erase(blocks.begin() + randomIdx);

    return block;
}

std::vector<TetrisBlock> Game::getAllBlocks()
{
    return {IBlock(), JBlock(), LBlock(), OBlock(), SBlock(), TBlock(), ZBlock()};
}