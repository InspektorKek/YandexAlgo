////
////  K.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 6.12.23..
////
//
//#include <vector>
//#include <cassert>
//
//using Iterator = std::vector<int>::iterator;
//using CIterator = std::vector<int>::const_iterator;
//
//std::vector<int> merge(
//    CIterator left_begin, CIterator left_end,
//    CIterator right_begin, CIterator right_end) {
//    // Your code
//    // “ヽ(´▽｀)ノ”
//    // [leftBegin, mid)
//    // [mid, rightEnd)
//    
//    // result array with size
//    std::vector<int> result;
//    result.reserve(std::distance(left_begin, left_end) + std::distance(right_begin, right_end));
//    
//    while (left_begin != left_end && right_begin != right_end) {
//        if (*left_begin < *right_begin) {
//            result.push_back(*left_begin);
//            left_begin++;
//        } else {
//            result.push_back(*right_begin);
//            right_begin++;
//        }
//    }
//    
//    result.insert(result.end(), left_begin, left_end);
//    result.insert(result.end(), right_begin, right_end);
//    
//    return result;
//}
//
//void merge_sort(Iterator begin, Iterator end) {
//    // Your code
//    // “ヽ(´▽｀)ノ”
//    auto lenght = std::distance(begin, end);
//    if (lenght <= 1) {
//        return;
//    }
//    
//    auto middle = std::next(begin, lenght/2);
//    
//    merge_sort(begin, middle);
//    merge_sort(middle, end);
//    
//    auto result = merge(begin, middle, middle, end);
//    std::move(result.begin(), result.end(), begin);
//}
//
//void test_merge_sort() {
//    std::vector<int> a = {1, 4, 9};
//    std::vector<int> b = {2, 10, 11};
//    std::vector<int> c = merge(a.cbegin(), a.cend(), b.cbegin(), b.cend());
//    std::vector<int> expected = {1, 2, 4, 9, 10, 11};
//    assert(c == expected);
//    std::vector<int> d = {1, 4, 2, 10, 1, 2};
//    std::vector<int> sorted = {1, 1, 2, 2, 4, 10};
//    merge_sort(d.begin(), d.end());
//    assert(d == sorted);
//}
//
//int main() {
//    test_merge_sort();
//}
