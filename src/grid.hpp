#pragma once

#include <vector>
#include <raylib.h>

class Grid {

public:
    int grid[20][10];
    void initialize();
    void printGrid();
    void drawColorInGrid();
    Grid();

private:
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};