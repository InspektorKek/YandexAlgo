//
//  
//  G.cpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 09/11/23.
//
//

#include <iostream>

class G {
public:
    void solution() {
        int decimalNumber;
        std::cin >> decimalNumber;
        
        std::string result = "";
        
        while (decimalNumber != 0) {
            result = std::to_string(decimalNumber % 2) + result;
            decimalNumber /= 2;
        }
        
        if (result.empty()) {
            result = "0";
        }
        
        std::cout << result << std::endl;
    }
};
