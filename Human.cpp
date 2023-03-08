#include "Human.h"

using namespace std;
        
        Move * Human::makeMove(){
            cout << "Enter move:" << endl;
            Move* move;
            string input;
            cin >> input;
            move->setName(input);
            return move;
        }
        
        string Human::setName(string name){
            Human::nameOfHuman = name;
            return name;
        }

        string Human::getName(){
            return Human::nameOfHuman;
        }
