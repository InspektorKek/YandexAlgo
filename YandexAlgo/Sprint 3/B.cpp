////
////  B.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 5.12.23..
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <map>
//
///*
// 2:'abc',
// 3:'def',
// 4:'ghi',
// 5:'jkl',
// 6:'mno',
// 7:'pqrs',
// 8:'tuv',
// 9:'wxyz'
//
// Input: String with numbers from 2-9. String length max 10 symbols
// Simply ignore numbers that already have been "taped".
// Output: All possible character combinations with a space.
// 
// Test case 1:
// Input: 23
// Output: ad ae af bd be bf cd ce cf
// 
// Test case 3:
// Input: 293
// Output: adg adh adi aeg
//*/
//
//std::map<char, std::string> dict = {
//    {'2', "abc"},
//    {'3', "def"},
//    {'4', "ghi"},
//    {'5', "jkl"},
//    {'6', "mno"},
//    {'7', "pqrs"},
//    {'8', "tuv"},
//    {'9', "wxyz"}
//};
//
//void generateCombinations(const std::string &input, int index, std::string current) {
//    if (index == input.length()) {
//        std::cout << current << " ";
//        return;
//    }
//
//    std::string letters = dict[input[index]];
//    for (char letter : letters) {
//        generateCombinations(input, index + 1, current + letter);
//    }
//}
//
//int main() {
//    std::string line;
//    std::getline(std::cin, line);
//    generateCombinations(line, 0, "");
//
//    return 0;
//}
