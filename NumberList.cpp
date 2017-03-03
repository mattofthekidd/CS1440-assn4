//
// Created by Matthew Kidd on 2/24/17.
//

#include "NumberList.hpp"

NumberList::NumberList(int maxNum, int cardSize) :
    m_maxNum(maxNum),
    m_minRange(2*cardSize*cardSize),
    m_maxRange(2*m_minRange)
{
    for (auto i = m_minRange; i < m_maxRange; i++) {
        m_numberList.push_back(i);
    }
    std::random_shuffle(m_numberList.begin(), m_numberList.end());
}

int NumberList::getValue(int index) const{
    return m_numberList[index];
}
