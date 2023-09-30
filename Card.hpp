//
//  Card.hpp
//  BlackJackTable
//
//  Created by Max Grove on 9/28/23.
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>
#include <string>

class Card;

int convertIntToValue(int cardInt);
std::string convertIntToStringValue(int cardInt);
Card getRandomCard();

class Card {
public:
    void printCard();
    int getCardInt() const;
    int getCardValue() const;
    void setCardInt(int cardInt);
    
    
    Card(int cardInt);
    Card();
private:
    int cardInt; //1 to 13. 1=Ace, 11 = Jack, 12 = Queen, 13 = King
    int cardValue; //1 to 10
    std::string stringValue; //A, 2 to 10, J, Q, K
};

#endif /* Card_hpp */
