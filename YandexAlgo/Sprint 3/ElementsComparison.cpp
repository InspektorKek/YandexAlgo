////
////  ElementsComparison.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 6.12.23..
////
//
//#include <algorithm>
//#include <vector>
//#include <iostream>
//
//// Array of elements
//int digit_lengths[10] = {4, 4, 3, 3, 6, 4, 5, 4, 6, 6};
//
//// Declare method to search for number of character in number by index
//std::vector<int> keyForCard(int card) {
//    return {-digit_lengths[card], card};
//}
//
//int main() {
//    std::vector<int> array = {1, 4, 3, 2, 5};
//    std::sort(array.begin(),
//              array.end(),
//              [&](int a, int b) {
//                  return keyForCard(a) < keyForCard(b);
//    });
//    for (auto value : array) {
//        std::cout << value << " ";
//    }
//    return 0;
//}
