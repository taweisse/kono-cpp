#pragma once

#include <vector>
#include <iostream>
#include "Board.h"
using namespace std;

class BoardView
{
public:
    BoardView();
    ~BoardView();

    void Draw(Board board);
};

