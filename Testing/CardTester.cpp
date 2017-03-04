//
// Created by Matthew Kidd on 3/3/17.
//

#include "CardTester.hpp"
#include "../Card.hpp"
#include<vector>
#include <iostream>

CardTester::CardTester() {
    NumberList potato(25, 5);
    Card card(5, potato);
    if(card.getOutput().size() == 0) {
        std::cout << "Error in creating card.\n";
        
    }
}