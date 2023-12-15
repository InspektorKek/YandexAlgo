////
////  J.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 5.12.23..
////
//
//#include <vector>
//#include <iostream>
//#include <string>
//#include <string>
//#include <limits>
//
//void bubleSort(std::vector<int> &array) {
//    bool isIterationNeeded = true;
//    bool wasSwappedAtAll = false;
//    
//    while (isIterationNeeded) {
//        bool wasSwapped = false;
//        for (int i = 0; i < array.size() - 1; ++i) {
//            if (array[i] > array[i + 1]) {
//                std::swap(array[i], array[i + 1]);
//                wasSwapped = true;
//                wasSwappedAtAll = true;
//            }
//        }
//        if (wasSwapped) {
//            for (int value : array) {
//                std::cout << value << " ";
//            }
//            std::cout << "\n";
//        } else {
//            isIterationNeeded = false;
//        }
//    }
//    
//    if (!wasSwappedAtAll) {
//        for (int value : array) {
//            std::cout << value << " ";
//        }
//        std::cout << "\n";
//    }
//}
//
//int main() {
//    int count;
//    std::cin >> count;
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    
//    std::vector<int> array(count, 0);
//    for (int i = 0; i < count; ++i) {
//        std::cin >> array[i];
//    }
//    
//    bubleSort(array);
//    
//    return 0;
//}
