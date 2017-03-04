//
// Created by Matthew Kidd on 3/3/17.
//

#include <iostream>
#include "DeckTester.hpp"
#include "../Deck.hpp"

DeckTester::DeckTester() {
    Deck deck(5, 5, 100);
    if(deck.getDeckSize() == 0) {
        std::cout << "Error in creating deck.\n";
    }
}
