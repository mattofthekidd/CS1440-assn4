//
// Created by Matthew Kidd on 2/21/17.
//

#ifndef ASSN4_CARD_HPP
#define ASSN4_CARD_HPP

#include <vector>
#include <random>
#include <algorithm>
#include <cstdlib>
#include <iomanip>
#include <sstream>

class Card {
public:
    Card(int cardSize, int maxNum);
    int getValue(int index) const;
    int getGridSize() const;
    int getRowSize() const;
    friend std::ostream& operator<<(std::ostream& out, const Card& card);

private:
    std::vector<int> m_row;
    std::vector<int> m_numberList;
    // 3-15
    int m_gridSize;
    int m_rowSize;
    int m_maxNum;

    void createRandomNumberList();

};

std::ostream& operator<<(std::ostream& out, const Card& card);


#endif //ASSN4_CARD_HPP
