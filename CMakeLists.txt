cmake_minimum_required(VERSION 3.6)
project(Assn4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        UserInterface.cpp UserInterface.h
        Deck.cpp Deck.hpp
        Card.cpp Card.hpp
        NumberList.cpp NumberList.hpp
        MenuOption.cpp MenuOption.h
        Menu.cpp Menu.h)

add_executable(Bingo main.cpp ${SOURCE_FILES})

set(TEST_FILES
        Testing/MenuTester.cpp Testing/MenuTester.h
        Testing/MenuOptionTester.cpp Testing/MenuOptionTester.h Testing/CardTester.cpp Testing/CardTester.hpp Testing/NumberListTester.cpp Testing/NumberListTester.hpp Testing/DeckTester.cpp Testing/DeckTester.hpp)

add_executable(Test Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})

