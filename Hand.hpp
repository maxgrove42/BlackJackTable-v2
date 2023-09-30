//
//  Hand.hpp
//  BlackJackTable
//
//  Created by Max Grove on 9/28/23.
//

#ifndef Hand_hpp
#define Hand_hpp

#include <stdio.h>
#include "Card.hpp"
#include <vector>

class Hand {
public:
    std::vector<int> getTotalValue() const;
    void addCardToHand(const Card &cardToAdd);
    void printHand();
    void printDealerHand();
    void printHandValue();
    
    Card deal();
    
    Hand(const Card &card);
    Hand();
private:
    std::vector<Card> cards;
    bool isBusted = false;
    std::vector<int> handValue;
    
};

#endif /* Hand_hpp */
