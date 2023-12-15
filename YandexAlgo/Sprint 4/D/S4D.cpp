//
//  S4D.cpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 12.12.23..
//

#include "S4D.hpp"

#include <map>
#include <vector>
#include <iostream>
#include <string>

void S4D::solution() {
    int count;
    std::cin >> count;
    std::cin.ignore();
    
    std::map<std::string, int> map;
    std::vector<std::string> array;
    
    for (int i = 0; i < count; ++i) {
        std::string input;
        std::getline(std::cin, input);
        if (map.find(input) == map.end()) {
            array.push_back(input);
        }
        ++map[input];
    }
    
    for (const auto& value : array) {
        std::cout << value << "\n";
    }
}
