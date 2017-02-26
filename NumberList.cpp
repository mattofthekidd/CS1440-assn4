//
// Created by Matthew Kidd on 2/24/17.
//

#include "NumberList.hpp"

void NumberList::createRandomNumberList() {
    for (auto i = 0; i < m_maxNum - 1; i++) {
        m_numberList.push_back(i + 1);
    }
    std::random_shuffle(m_numberList.begin(), m_numberList.end());
}