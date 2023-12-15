//#include <iostream>
//#include <string>
//
//bool isSubsequence(const std::string &s, const std::string &t) {
//    int sIndex = 0, tIndex = 0;
//
//    while (sIndex < s.size() && tIndex < t.size()) {
//        if (s[sIndex] == t[tIndex]) {
//            sIndex++; // Move to the next character in s
//        }
//        tIndex++; // Always move to the next character in t
//    }
//
//    return sIndex == s.size(); // If we have traversed all of s, it is a subsequence
//}
//
//int main() {
//    std::string s, t;
//    std::getline(std::cin, s);
//    std::getline(std::cin, t);
//
//    bool result = isSubsequence(s, t);
//    std::cout << (result ? "True" : "False") << std::endl;
//
//    return 0;
//}
