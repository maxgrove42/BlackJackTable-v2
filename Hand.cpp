//
//  Hand.cpp
//  BlackJackTable
//
//  Created by Max Grove on 9/28/23.
//

#include "Hand.hpp"
#include "Card.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Hand::Hand(const Card &card) {
    cards.push_back(card);
    if (card.getCardInt() == 1) {
        handValue.push_back(1);
        handValue.push_back(11);
    }
    else {
        handValue.push_back( card.getCardValue() );
    }
}
Hand::Hand() {
    handValue.push_back( 0 );
}
std::vector<int> Hand::getTotalValue() const {
    return handValue;
}

void Hand::addCardToHand(const Card &cardToAdd) {
    cards.push_back(cardToAdd);

    if (cardToAdd.getCardInt() == 1) {
            if (handValue.size() == 1) {
                handValue[0]++;
                if (handValue[0] + 10 <= 21)
                    handValue.push_back(handValue[0] + 10);
            }
            else {
                handValue[0]++;
                handValue[1]++;
                if (handValue[1]++ > 21) {
                    handValue.pop_back();
                }
            }
    }
    else {
        for (int i = 0; i < handValue.size(); i++) {
                handValue[i] += cardToAdd.getCardValue();
        }
        if (handValue.size() == 2) {
            if (handValue[1] > 21) {
                handValue.pop_back();
            }
        }
    }
    
    if (handValue[0] > 21) {
        isBusted = true;
    }
    
}

void Hand::printHand() {
    for (int i = 0; i < cards.size(); i++) {
        cards[i].printCard();
    }
    printHandValue();
}
Card Hand::deal() {
    Card card;
    card = getRandomCard();
    addCardToHand(card);
    return card;
}
void Hand::printHandValue() {
    std::cout << "Hand value is: ";
    if (isBusted)
        std::cout << "busted!";
    else {
        for (int i = 0; i < handValue.size(); i++) {
            std::cout << handValue[i];
            if (i != handValue.size() - 1)
                std::cout << " / ";
        }
    }
    std::cout << std::endl << std::endl;
}
void Hand::printDealerHand() {
    std::cout << "|------|" << std::endl;
    std::cout << "| \\  / |" << std::endl;
    std::cout << "|  \\/  |" << std::endl;
    std::cout << "|  /\\  |" << std::endl;
    std::cout << "| /  \\ |" << std::endl;
    std::cout << "|------|" << std::endl;
    cards[1].printCard();
    std::cout << std::endl;
}
