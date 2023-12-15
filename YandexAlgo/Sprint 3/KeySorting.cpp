////
////  KeySorting.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 5.12.23..
////
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//// Array of elements
//int digit_lengths[10] = {4, 4, 3, 3, 6, 4, 5, 4, 6, 6};
//
//// Declare method to search for number of character in number by index
//int cardStrength(int cardOne, int cardTwo) {
//    return digit_lengths[cardOne] < digit_lengths[cardTwo];
//}
//
//// Function that get an array and sort it
//void keySorting(std::vector<int> &array, int (*key)(int, int)) {
//    for (int index = 1; index < array.size(); ++index) {
//        int itemToInsert = array[index];
//        int j = index;
//        
//        while (j > 0 && key(itemToInsert, array[j - 1])) {
//            array[j] = array[j - 1];
//            --j;
//        }
//        
//        array[j] = itemToInsert;
//    }
//}
//
//int main() {
////    int count;
////    std::cin >> count;
////    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//    std::vector<int> array = {3, 7, 9, 2, 3};
////    for (int i = 0; i < count; ++i) {
////        std::cin >> array[i];
////    }
//    
//    keySorting(array, cardStrength);
//    
//    for (auto value : array) {
//        std::cout << value << " ";
//    }
//    
//    return 0;
//}
