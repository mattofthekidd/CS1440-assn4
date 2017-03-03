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
    createOutput();
}
void Card::createOutput() {
    std::ostringstream out;
    auto outside = 0;
    std::string lineBreak = "+----";
    std::stringstream line;
    for(auto i = 0; i <= m_rowSize; i++) {
        if((i) == m_rowSize) {
            line << "+\n";
        }
        else {
            line << lineBreak;
        }
    }

    while(outside < m_gridSize) {
        out << line.str();
        for(auto row = 0; row < m_rowSize; row++) {
            if(outside == m_gridSize) break;
            out << std::left << std::setw(1) << "|"
                << std::right << std::setw(3) << m_values.at(outside) << " ";
            outside++;
        }
        out << "|\n";
    }
    out << line.str();
    m_output = out.str();
}

int Card::getValue(int index) const {
    return m_values.at(index);
}

std::string Card::getOutput() const {
    return m_output;
}
