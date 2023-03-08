#include "Computer.h"

        Move* Computer::makeMove(){
            Move* move;
            move->setName("Rock");
            return move;
        }

        string  Computer::getName(){
            return Computer::nameOfComputer;
        }
