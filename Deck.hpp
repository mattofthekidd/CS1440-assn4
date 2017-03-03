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

class Deck {
public:
    Deck(int cardSize, int deckSize, int maxNum);
    void print(std::ostream& out);
    void print(std::ostream& out, int cardIndex);

    int getDeckSize();
private:
    std::vector<Card> m_deck;
    int m_deckSize;
};


#endif //ASSN4_DECK_HPP
