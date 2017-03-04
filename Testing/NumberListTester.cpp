//
// Created by Matthew Kidd on 3/3/17.
//

#include <iostream>
#include "NumberListTester.hpp"
#include "../NumberList.hpp"

NumberListTester::NumberListTester() {
    NumberList potato(100, 5);
    auto minRange(2*25);
    auto maxRange(2*minRange);
    for(auto i = 0; i < potato.getSize()-1; i++) {
        if(potato.getValue(i) > maxRange || potato.getValue(i) < minRange) {
            std::cout << "Number is outside of expected range.\n";
        }
    }
}