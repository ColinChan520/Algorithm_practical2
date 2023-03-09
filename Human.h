#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "Player.h"

class Human : public Player{
    public:
        
        Move * makeMove();
        Human(std::string playerName);
        
        std::string getName();
    private:
        std::string nameOfHuman = "Human";

};

#endif