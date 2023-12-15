//
//  
//  I.cp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 13/11/23.
//
//

#include <iostream>

class I {
public:
    void solution() {
        float inputValue;
        std::cin >> inputValue;
        
        while (inputValue > 1) {
            inputValue /= 4;
        }
        
        if (inputValue == 1) {
            std::cout << "True" << "\n";
        } else {
            std::cout << "False" << "\n";
        }
    }
};

