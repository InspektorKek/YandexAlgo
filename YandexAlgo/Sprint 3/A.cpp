////
////  A.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 2.12.23..
////
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//void generate(int count, int openCount, int closeCount, std::string currentString) {
//    if (currentString.size() == 2 * count) {
//        std::cout << currentString << "\n";
//        return;
//    }
//    
//    if (openCount < count) {
//        generate(count, openCount + 1, closeCount, currentString + "(");
//    }
//    
//    if (closeCount < openCount) {
//        generate(count, openCount, closeCount + 1, currentString + ")");
//    }
//}
//
//int main() {
//    int count;
//    std::cin >> count;
//    generate(count, 0, 0, "");
//}
