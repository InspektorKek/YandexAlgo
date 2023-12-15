////
////  H.cpp
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
//bool compare(int a, int b) {
//    return std::to_string(a) + std::to_string(b) > std::to_string(b) + std::to_string(a);
//}
//
//void keySorting(std::vector<int> &array, bool (*key)(int, int)) {
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
//    
//    std::string result = "";
//    for (auto element : array) {
//        result += std::to_string(element);
//    }
//    
//    std::cout << result;
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
//    keySorting(array, compare);
//    
//    return 0;
//}
