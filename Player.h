#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"
using namespace std;

class Player{
    public:
        
        virtual string getName() = 0;
        virtual Move* makeMove() = 0;

};

#endif