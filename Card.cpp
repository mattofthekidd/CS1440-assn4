//
// Created by Matthew Kidd on 2/21/17.
//


#include "Card.hpp"

Card::Card(int cardSize, int maxNum) :
m_maxNum(maxNum),
m_gridSize(cardSize * cardSize),
m_rowSize(cardSize)
{
    int i = 0;
    createRandomNumberList();
    for(auto row = 0; row < m_gridSize; row++) {
        i++;
        m_row.push_back(m_numberList[i]);
    }
    m_numberList.clear();
}

void Card::createRandomNumberList() {
    for (auto i = 0; i < m_maxNum - 1; i++) {
        m_numberList.push_back(i + 1);
    }
    std::random_shuffle(m_numberList.begin(), m_numberList.end());
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
    return m_row.at(index);
}

int Card::getGridSize() const {
    return m_gridSize;
}

int Card::getRowSize() const {
    return m_rowSize;
}
