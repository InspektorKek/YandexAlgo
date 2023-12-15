////
////  L.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 29.11.23..
////
//
//#include <iostream>
//#include <vector>
//#include <sstream>
//#include <string>
//#include <limits>
//
//int binarySearch(std::vector<int> &array, int value, int left, int right) {
//    if (left > right) {
//        return -1;
//    }
//
//    int mid = left + (right - left) / 2;
//
//    if (array[mid] >= value) {
//        // Search in the left half including mid
//        int leftSearch = binarySearch(array, value, left, mid - 1);
//        return leftSearch != -1 ? leftSearch : mid;
//    } else {
//        // Search in the right half
//        return binarySearch(array, value, mid + 1, right);
//    }
//}
//
//void solution(std::vector<int> &array, int cost) {
//    // first index, second index
//    int firstDayIndex, secondDayIndex;
//    // binary search for two elements
//    firstDayIndex = binarySearch(array, cost, 0, array.size() - 1) + 1;
//    secondDayIndex = binarySearch(array, cost * 2, 0, array.size() - 1) + 1;
//    // cout two elements
//    std::cout << firstDayIndex << " " << secondDayIndex << "\n";
//}
//
//int main() {
//    int daysCount;
//    std::cin >> daysCount;
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    
//    std::vector<int> array(daysCount, 0);
//    std::string line;
//    std::getline(std::cin, line);
//    std::istringstream iss(line);
//    for (int i = 0; iss >> array[i]; ++i) { }
//    
//    int cost;
//    std::cin >> cost;
//    solution(array, cost);
//    
//    return 0;
//}
