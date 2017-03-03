//
// Created by Matthew Kidd on 2/21/17.
//


#include "Card.hpp"
#include "NumberList.hpp"

Card::Card(int cardSize, const NumberList& list) :
m_gridSize(cardSize * cardSize),
m_rowSize(cardSize)
{
    int i = 0;
    for(auto row = 0; row < m_gridSize; row++) {
        i++;
        m_values.push_back(list.getValue(i));
    }
}

std::ostream& operator<<(std::ostream& out, const Card& card) {
    auto rowSize = card.getRowSize();
    auto gridSize = card.getGridSize();
    auto outside = 0;
    std::string lineBreak = "+----";
    std::stringstream line;
    for(auto i = 0; i <= rowSize; i++) {
        if((i) == rowSize) {
            line << "+\n";
        }
        else {
            line << lineBreak;
        }
    }

    while(outside < gridSize) {
        out << line.str();
        for(auto row = 0; row < rowSize; row++) {
            if(outside == gridSize) break;
            out << std::left << std::setw(1) << "|"
                << std::right << std::setw(3) << card.getValue(outside) << " ";
            outside++;
        }
        out << "|\n";
    }
    out << line.str();
    return out;
}

int Card::getValue(int index) const {
    return m_values.at(index);
}

int Card::getGridSize() const {
    return m_gridSize;
}

int Card::getRowSize() const {
    return m_rowSize;
}
