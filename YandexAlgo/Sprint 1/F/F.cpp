//
//
//  F.cpp
//  F
//
//  Created by Mikhail Borisov on 09/11/23.
//
//

#include "F.hpp"

#include <iostream>

void F::solution() {
    std::string sentence;
    std::getline(std::cin, sentence);
    
    std::string alphabeticOnly = keepAlpthabeticOnly(sentence);
    
    // Iterate throw string from center with left and right pointer.
    int leftIndex, rightIndex;
    if (alphabeticOnly.size() % 2 == 0) {
        leftIndex = (alphabeticOnly.size() / 2) - 1;
        rightIndex = leftIndex + 1;
    } else {
        leftIndex = (alphabeticOnly.size() / 2);
        rightIndex = leftIndex;
    }
    // While leftPointer != 0
    while (leftIndex >= 0) {
        // if left == right { continue } // don't forget about capitalized letters
        if (areLettersEqualIgnoreCase(alphabeticOnly[leftIndex], alphabeticOnly[rightIndex])) {
            --leftIndex;
            ++rightIndex;
        } else {
            // else return false
            std::cout << "False" << std::endl;
            return;
        }
    }
    
    std::cout << "True" << std::endl;
}

std::string F::keepAlpthabeticOnly(std::string input) {
    std::string result;
    
    for (char character : input) {
        if ((character >= '0' && character <= '9') || (character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
            result += character;
        }
    }
    return result;
}

bool F::areLettersEqualIgnoreCase(char a, char b) {
    return std::toupper(a) == std::toupper(b);
}
