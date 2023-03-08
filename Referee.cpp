#include <iostream>
#include "Referee.h"
#include "Move.h"

    Player* Referee::refGame(Player*player1, Player*player2){  
        
        Move* move;
        
        Move* player1move = player1->makeMove();
        Move* player2move = player2->makeMove();
        
        move->compare(player1move, player2move);
        
        bool result = move->compare(player1move, player2move);

        if(result == true){
            return player1;
        }
        else if(result == false){
            return player2;
        }
        else{
            return nullptr;
        }
     }
              
