#include "Computer.h"

        Move* Computer::makeMove(){
            Move* move = new Move();
            move->setName("Rock");
            return move;
        }

        std::string  Computer::getName(){
            return Computer::nameOfComputer;
        }
