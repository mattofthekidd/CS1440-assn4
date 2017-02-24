//
// Created by Matthew Kidd on 2/22/17.
//

#ifndef ASSN4_DECK_HPP
#define ASSN4_DECK_HPP

#include <vector>
#include "Card.hpp"

/*
 * The Deck class, as a minimum, must be able to do the following:
a. Construct a deck object given the size of the cards, number of cards, and the
maximum numbers in a bingo number set
b. A destructor that frees up all dynamically allocated memory associated with the
deck
c. A method to print whole deck to an output stream
d. A method to print a specific card in the deck to an output stream
 */

// The typically size is 5, but we’ll allow card to vary in size from 3 to 15.

// The numbers of cards come from a bingo number set that contains every number from 1 to M, where M is a user-specified max between
// 2*N2 and 4*N2. The number of cards in the deck in a user-specified value between 3 and
// 10000.

class Deck {
public:
    //number of cards is 3-1000
    Deck(int cardSize, int deckSize, int maxNum);
    void print(std::ostream& out);
    void print(std::ostream& out, int cardIndex);

    int getDeckSize();
private:
    std::vector<Card> m_deck;
    int m_deckSize;
};


#endif //ASSN4_DECK_HPP
