//#include <iostream>
//#include <stack>
//#include <string>
//
//bool is_correct_bracket_seq(const std::string& sequence) {
//    std::stack<char> brackets;
//
//    for (char character : sequence) {
//        switch (character) {
//            case '(':
//            case '{':
//            case '[':
//                brackets.push(character);
//                break;
//            case ')':
//                if (brackets.empty() || brackets.top() != '(') return false;
//                brackets.pop();
//                break;
//            case '}':
//                if (brackets.empty() || brackets.top() != '{') return false;
//                brackets.pop();
//                break;
//            case ']':
//                if (brackets.empty() || brackets.top() != '[') return false;
//                brackets.pop();
//                break;
//        }
//    }
//
//    return brackets.empty();
//}
//
////int main() {
////    std::string line;
////    std::getline(std::cin, line);
////    
////    std::string result = is_correct_bracket_seq(line) ? "True" : "False";
////    std::cout << result << "\n";
////
////    return 0;
////}
