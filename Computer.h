#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include "Player.h"

class Computer : public Player{
    public:
        Move* makeMove();

        std::string getName();
    private:
        std::string nameOfComputer = "Computer";
};

#endif
