////
////  
////  A.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 15/11/23.
////
////
//
//#ifdef REMOTE_JUDGE
//#include "solution.h"
//#endif
//
//#include <iostream>
//#include <vector>
//
//#ifndef REMOTE_JUDGE
//
//// MARK: - Your structures
//
//#endif
//
//// MARK: - Your solution
//
//void solution() {
//    int rowCount, columnCount;
//    
//    std::cin >> rowCount >> columnCount;
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    
//    std::vector<std::vector<int>> matrix(rowCount, std::vector<int>(columnCount, 0));
//    
//    for (int i = 0; i < rowCount; ++i) {
//        for (int j = 0; j < columnCount; ++j) {
//            std::cin >> matrix[i][j];
//        }
//    }
//        
//    for (int i = 0; i < columnCount; ++i) {
//        for (int j = 0; j < rowCount; ++j) {
//            std::cout << matrix[j][i] << " ";
//        }
//        std::cout << "\n";
//    }
//}
//
//#ifndef REMOTE_JUDGE
//
//// MARK: - Test
//
//void test() {
//    solution();
//}
//
//int main() {
//    test();
//}
//#endif
