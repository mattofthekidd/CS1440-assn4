//
// Created by Matthew Kidd on 2/21/17.
//

#ifndef ASSN4_CARD_HPP
#define ASSN4_CARD_HPP

#include <vector>

#include <iomanip>
#include <sstream>
#include "NumberList.hpp"

class Card {
public:
    Card(int cardSize, const NumberList& list);
    int getValue(int index) const;
    int getGridSize() const;
    int getRowSize() const;
    std::string getOutput() const;
    friend std::ostream& operator<<(std::ostream& out, const Card& card);

private:
    std::vector<int> m_values;
    int m_gridSize;
    int m_rowSize;
    std::string m_output;

    void createOutput();

};

std::ostream& operator<<(std::ostream& out, const Card& card);


#endif //ASSN4_CARD_HPP
