#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Card.hpp"
#include "Hand.hpp"
#include "Player.hpp"


int main()
{
    Hand hand1;
    Card card1(1);
    hand1.addCardToHand(card1);
    hand1.printHand();
    
    Card card2(8);
    hand1.addCardToHand(card2);
    hand1.printHand();
 
    Card card3(4);
    hand1.addCardToHand(card3);
    hand1.printHand();
    
    
    /*char goAgain = 'y';
    while (goAgain == 'y' || goAgain == 'Y') {
        srand(time(NULL));
        char hit;
        Player dealer("Dealer");
        dealer.printDealerHand();
        
        Player player1("Max");
        player1.printHand();
        std::cout << "Do you want to hit? (y or n): ";
        std::cin >> hit;
        while (hit == 'y') {
            player1.hit();
            if (player1.getHand().getTotalValue()[0] > 21) break;
            std::cout << "Do you want to hit? (y or n): ";
            std::cin >> hit;
        }
        dealer.printHand();
        while (dealer.getHand().getTotalValue()[0] < 16) {
            dealer.hit();
        }
        std::cout << "Do you want to play again (y for yes, n for no): ";
        std::cin >> goAgain;
    }
    */
    return 0;
}



