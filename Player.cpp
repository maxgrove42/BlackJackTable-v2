//
//  Player.cpp
//  BlackJackTable
//
//  Created by Max Grove on 9/28/23.
//

#include "Player.hpp"
#include <iostream>
#include <string>

Hand Player::getHand() {
    return hand;
}
void Player::pushHand() {
    std::cout << "You push the hand." << std::endl;
    std::cout << "Your available money is: " << availableMoney << std::endl;
}
void Player::winHand() {
    std::cout << "You win the hand!" << std::endl;
    availableMoney += bet;
    std::cout << "Your available money is: " << availableMoney << std::endl;
}
void Player::loseHand() {
    std::cout << "You lose the hand!" << std::endl;
    availableMoney -= bet;
    std::cout << "Your available money is: " << availableMoney << std::endl;
}

int Player::getBet() {
    return bet;
}
void Player::setBet(int bet) {
    this->bet = bet;
}
int Player::getAvailableMoney() {
    return availableMoney;
}
void Player::setAvailableMoney(int availableMoney) {
    this->availableMoney = availableMoney;
}
void Player::hit() {
    Card card = hand.deal();
    card.printCard();
    hand.printHandValue();
}
void Player::finish() {
    //compare to the dealer. if above dealer and not busted, winHand()
    // if tied with dealer. push.
    // if below dealer or busted, loseHand()
}
void Player::printHand() {
    std::cout << name << "'s Hand:" << std::endl;
    hand.printHand();
}
void Player::printDealerHand() {
    std::cout << name << "'s Hand:" << std::endl;
    hand.printDealerHand();
}
Player::Player(std::string name) {
    this->name = name;
    hand.deal();
    hand.deal();
}
Player::Player() {
    hand.deal();
    hand.deal();
}
