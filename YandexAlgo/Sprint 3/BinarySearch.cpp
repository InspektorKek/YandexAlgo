////
////  BinarySearch.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 29.11.23..
////
//
//#include <iostream>
//#include <vector>
//
//int binarySearch(std::vector<int> &array, int element, int leftIndex, int rightIndex) {
//    if (rightIndex <= leftIndex) {
//        return -1;
//    }
//    
//    int mid = (leftIndex + rightIndex) / 2;
//    
//    if (array[mid] == element) {
//        return mid;
//    } else if (element > array[mid]) {
//        return binarySearch(array, element, leftIndex, mid - 1);
//    } else {
//        return binarySearch(array, element, mid, rightIndex);
//    }
//}
//
//int main() {
//    int value = 10;
//    std::vector<int> array = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//    int resultIndex = binarySearch(array, value, 0, array.size());
//    std::cout << resultIndex << std::endl;
//    return 0;
//}
