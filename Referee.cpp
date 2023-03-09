#include <iostream>
#include "Referee.h"
#include "Move.h"

    Player* Referee::refGame(Player*player1, Player*player2){  
        
        Move* move = new Move();
        
        Move* player1move = player1->makeMove();
        Move* player2move = player2->makeMove();
        
        int result = move->compare(player1move, player2move);

        if(result == 2){
          return nullptr;  
        }
        else if(result == 1){
            return player1;
        }
        else if(result == 0){
            return player2;
        }
        else{
           return nullptr; 
        }

        delete move;
     }
              
