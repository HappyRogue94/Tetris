#pragma once

#include <raylib.h>
#include <vector>

/*
the keyword extern allows us to declare a var in one file and use it another. 
*/
extern const Color darkGrey;
extern const Color green;
extern const Color red;
extern const Color orange;
extern const Color yellow; 
extern const Color purple; 
extern const Color cyan; 
extern const Color blue; 

std::vector<Color> getCellColors();