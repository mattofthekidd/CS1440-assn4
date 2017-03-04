//
// Created by Matthew Kidd on 2/22/17.
//

#ifndef ASSN4_DECK_HPP
#define ASSN4_DECK_HPP

#include <vector>
#include "Card.hpp"


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
