#include <iostream>
#include "Deck.hpp"
#include "UserInterface.h"

int main() {

//    Deck deck(5, 5, 100);
//    std::cout << "Hello, World!" << std::endl;
//    deck.print(std::cout);
    UserInterface ui;
    ui.run();
    return 0;
}

/*
 * The starting project contains a text-based user interface that allows a user to create a deck,
 * delete the current deck, print a card from the current deck, display the entire deck, or save the
 * entire deck to a file.
 */

// The typically size is 5, but we’ll allow card to vary in size from 3 to 15.

// The numbers of cards come from a bingo
// number set that contains every number from 1 to M, where M is a user-specified max between
// 2*N2 and 4*N2. The number of cards in the deck in a user-specified value between 3 and
// 10000.