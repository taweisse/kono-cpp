#pragma once
#include "Player.h"
#include <string>
using namespace std;
bool ReadDigit(int&);
bool ReadDirection(char[3]);
//inline void ClearInput();

class Human : public Player
{
public:
    Human();
    ~Human();

    virtual void Play(Board&);
};
