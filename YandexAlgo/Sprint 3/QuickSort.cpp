////
////  QuickSort.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 7.12.23..
////
//
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
///*
// Quick sort algo
// Input: [2,5,67,43,432,432,433,5,67,8]
// 1. Partision funciton:
//    Input: Pivot element and array
// 2. Quick sort algo:
//    1. Choose random element
//    2. Get left, center, right array from Partision funciton using pivot
// 3. Apply quick sort to left and right array
// 4. Merge left + center + right
// */
//
//std::vector<int> partition(std::vector<int>& array, int pivot) {
//    std::vector<int> left, center, right;
//    for (int x : array) {
//        if (x < pivot) {
//            left.push_back(x);
//        } else if (x == pivot) {
//            center.push_back(x);
//        } else {
//            right.push_back(x);
//        }
//    }
//    return {left, center, right};
//}
//
//std::vector<int> quicksort(std::vector<int>& array) {
//    if (array.size() < 2) {
//        return array;
//    } else {
//        int pivot = array[rand() % array.size()];
//        auto [left, center, right] = partition(array, pivot);
//        auto sorted_left = quicksort(left);
//        auto sorted_right = quicksort(right);
//        std::vector<int> result(sorted_left);
//        result.insert(result.end(), center.begin(), center.end());
//        result.insert(result.end(), sorted_right.begin(), sorted_right.end());
//        return result;
//    }
//}
//
//int main() {
//    std::vector<int> arr = {5, 2, 8, 4, 7, 1, 3, 6};
//    auto result = quicksort(arr);
//    for (int x : result) {
//        std::cout << x << " ";
//    }
//    std::cout << std::endl;
//    return 0;
//}
