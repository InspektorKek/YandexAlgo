////
////  Insertion\Sort.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 5.12.23..
////
//
//#include <vector>
//#include <iostream>
//
//void insertionSort(std::vector<int> &array) {
//    for (int i = 0; i < array.size(); ++i) {
//        int valueToInsert = array[i];
//        
//        int j = i;
//        while (j > 0 && valueToInsert < array[j - 1]) {
//            array[j] = array[j - 1];
//            --j;
//        }
//        
//        array[j] = valueToInsert;
//    }
//}
//
//int main() {
//    std::vector<int> array = {9,2,4,6,8,1,57};
//    insertionSort(array);
//    for (int value : array) {
//        std::cout << value << " ";
//    }
//    return 0;
//}
