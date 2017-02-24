//
// Created by Matthew Kidd on 2/22/17.
//

#include "Deck.hpp"

Deck::Deck(int cardSize, int deckSize, int maxNum) :
m_deckSize(deckSize)
{
    for(auto i = 0; i < deckSize; i++) {
        Card card(cardSize, maxNum);
        m_deck.push_back(card);
    }
}

//print whole deck
void Deck::print(std::ostream& out)
{
    for (auto i = 0; i < m_deck.size(); i++) {
        //call print for specific card at index
        print(out, i);
        out << std::endl;
    }
    // TODO: Implement

}

//print a card at the given position
void Deck::print(std::ostream& out, int cardIndex)
{
    out << "Card #" << cardIndex+1 << "\n";
    out << m_deck.at(cardIndex);
    // TODO: Implement
}

int Deck::getDeckSize() {
    return m_deckSize;
}
