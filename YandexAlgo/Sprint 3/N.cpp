////
////  N.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 6.12.23..
////
//
//#include <vector>
//#include <iostream>
//#include <limits>
//#include <algorithm>
//
//bool sortArray(std::vector<int> left, std::vector<int> right) {
//    return left < right;
//}
//
//void solution(std::vector<std::vector<int>> &array) {
//    std::sort(array.begin(), array.end());
//    
//    std::vector<std::vector<int>> result;
//    result.reserve(array.size());
//    result[0] = array[0];
//    
//    for (int index = 1; index < array.size(); ++index) {
//        auto& lastElement = result.back();
//        
//        if (lastElement[1] >= array[index][0]) {
//            lastElement[1] = std::max(lastElement[1], array[index][1]);
//        } else {
//            result.push_back(array[index]);
//        }
//    }
//    
//    for (auto const &array : result) {
//        std::cout << array[0] << " " << array[1] << "\n";
//    }
//}
//
//int main() {
//    int rangesCount;
//    std::cin >> rangesCount;
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    
//    std::vector<std::vector<int>> arrayOfArrays(rangesCount, std::vector<int>(2));
//    for (auto &pair : arrayOfArrays) {
//        std::cin >> pair[0] >> pair[1];
//    }
//    
//    solution(arrayOfArrays);
//    
//    return 0;
//}
