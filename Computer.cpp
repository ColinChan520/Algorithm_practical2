#include "Computer.h"

        Move* Computer::makeMove(){
            Move* move;
            move->setName("Rock");
            return move;
        }

        std::string  Computer::getName(){
            return Computer::nameOfComputer;
        }
