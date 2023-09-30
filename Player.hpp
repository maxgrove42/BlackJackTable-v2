//
//  Player.hpp
//  BlackJackTable
//
//  Created by Max Grove on 9/28/23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Hand.hpp"

class Player {
public:
    Hand getHand();
    void printHand();
    void printDealerHand();
    void pushHand();
    void winHand();
    void loseHand();
    
    int getBet();
    void setBet(int bet);
    
    void hit();
    void finish();
    
    int getAvailableMoney();
    void setAvailableMoney(int availableMoney);
    Player(std::string name);
    Player();
private:
    std::string name;
    int bet;
    int availableMoney;
    Hand hand;
};

#endif /* Player_hpp */
