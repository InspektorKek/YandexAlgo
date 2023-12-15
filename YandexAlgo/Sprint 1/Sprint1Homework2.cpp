//
//
//  Sprint1Homework2.cpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 10/11/23.
//
//

#include <iostream>
#include <vector>

// https://contest.yandex.ru/contest/22450/run-report/96803978/
// MARK: - Your solution

class Sprint1Homework2 {
    void solution() {
        int k;
        std::cin >> k;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::vector<int> numbers(9, 0);
        int maxT = 0;
        
        int rowCount = 4, columnCount = 4;
        std::string line;
        
        for (int i = 0; i < rowCount; ++i) {
            std::getline(std::cin, line);
            
            for (int j = 0; j < columnCount && j < line.length(); ++j) {
                char character = line[j];
                int value = character - '0';
                if (value >= 1 && value <= 9) {
                    ++numbers[value - 1];
                    maxT = std::max(maxT, value);
                }
            }
        }
        
        int result = 0;
        for (int i = 1; i <= maxT; ++i) {
            if ((numbers[i - 1] != 0) && (numbers[i - 1] <= k * 2)) {
                ++result;
            }
        }
        std::cout << result << "\n";
    }
};
