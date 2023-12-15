//
//
//  G.cpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 09/11/23.
//
//

#include <iostream>

// MARK: - Your solution

class H {
    
private:
    int summ(int first, int second, int &carry) {
        int sum = first + second + carry;
        carry = sum / 2;
        return sum % 2;
    }

public:
    void solution() {
        int firstNumber, secondNumber;
        std::cin >> firstNumber >> secondNumber;
        if (firstNumber < secondNumber) {
            int number = firstNumber;
            firstNumber = secondNumber;
            secondNumber = number;
        }
        
        int carry = 0;
        int summResult = 0;
        int place = 1;
        
        while (firstNumber > 0 || secondNumber > 0 || carry > 0) {
            int firstInt = firstNumber % 10;
            int secondInt = secondNumber % 10;
            
            int sum = summ(firstInt, secondInt, carry);
            summResult = summResult + (sum * place);
            place *= 10;
            
            firstNumber /= 10;
            secondNumber /= 10;
        }
        
        std::cout << summResult << std::endl;
    }
};
