//
// Created by Matthew Kidd on 2/24/17.
//

#ifndef ASSN4_NUMBERLIST_HPP
#define ASSN4_NUMBERLIST_HPP

#include <vector>
#include <random>
#include <algorithm>
#include <cstdlib>

class NumberList {
public:
    NumberList(int maxNum, int cardSize);

    int getValue(int index) const;
    int getSize() const;
private:
    int m_maxNum;
    int m_minRange;
    int m_maxRange;
    int m_size;
    std::vector<int> m_numberList;
};


#endif //ASSN4_NUMBERLIST_HPP
