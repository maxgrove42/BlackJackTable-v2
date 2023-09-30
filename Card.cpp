//
//  Card.cpp
//  BlackJackTable
//
//  Created by Max Grove on 9/28/23.
//

#include "Card.hpp"
#include <iostream>
#include <time.h>
#include <stdlib.h>

void Card::printCard() {
    if (cardInt > 13 || cardInt < 1) {
        std::cout << "Printing Card failed. Invalid Card Integer or Card uninitialized. Please use 1 to 13." << std::endl;
        exit(1);
    }
    std::cout << "|------|" << std::endl;
    if (stringValue == "10")
        std::cout << "|" << stringValue << "    |" << std::endl;
    else
        std::cout << "|" << stringValue << "     |" << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << "|      |" << std::endl;
    }
    if (stringValue == "10")
        std::cout << "|    " << stringValue << "|" << std::endl;
    else
        std::cout << "|     " << stringValue << "|" << std::endl;
    std::cout << "|------|" << std::endl;
}
void Card::setCardInt(int cardInt) {
    this->cardInt = cardInt;
    cardValue = convertIntToValue(cardInt);
    stringValue = convertIntToStringValue(cardInt);
}
int Card::getCardInt() const {
    return cardInt;
}
int Card::getCardValue() const {
    return cardValue;
}
Card::Card(int cardInt) {
    if (cardInt > 13 || cardInt < 1) {
        std::cout << "Invalid Card Integer. Please use 1 to 13." << std::endl;
        exit(1);
    }
    
    
    
    this->cardInt = cardInt;
    cardValue = convertIntToValue(cardInt);
    stringValue = convertIntToStringValue(cardInt);
}
Card::Card() {
    //do nothing. all variables are uninitialized
}


int convertIntToValue(int cardInt) {
    return std::min(cardInt, 10);
}
std::string convertIntToStringValue(int cardInt) {
    if (cardInt == 1)
        return "A";
    else if (cardInt == 11)
        return "J";
    else if (cardInt == 12)
        return "Q";
    else if (cardInt == 13)
        return "K";
    else
        return std::to_string(cardInt);
}
Card getRandomCard() {
    int cardInt = rand() % 13 + 1;
    Card card(cardInt);
    return card;
}
