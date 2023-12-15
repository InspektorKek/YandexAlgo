//#include <iostream>
//#include <string>
//#include <vector>
//#include <optional>
//#include <limits>
//
//struct Stack {
//public:
//    Stack(int size) : size(size), currentMaxValue(INT32_MIN) {
//        array = std::vector<std::pair<int, int>>(size);
//    }
//    
//    void getMax() {
//        if (currentIndex == 0) {
//            std::cout << "None\n";
//        } else {
//            std::cout << currentMaxValue << "\n";
//        }
//    }
//    
//    void push(int value) {
//        if (currentIndex >= size) { // Check for stack overflow
//            std::cout << "Stack overflow\n";
//            return;
//        }
//        currentMaxValue = std::max(currentMaxValue, value);
//        array[currentIndex++] = std::make_pair(value, currentMaxValue);
//    }
//    
//    void pop() {
//        if (currentIndex == 0) {
//            std::cout << "error\n";
//        } else {
//            --currentIndex;
//            currentMaxValue = currentIndex == 0 ? INT32_MIN : array[currentIndex - 1].second;
//        }
//    }
//
//private:
//    std::vector<std::pair<int, int>> array;
//    int currentMaxValue;
//    int currentIndex = 0;
//    int size;
//};
//
//struct Command {
//    std::string name;
//    std::optional<int> value;
//    
//    Command(const std::string& name, std::optional<int> value)
//    : name(name), value(value) {}
//};
//
//Command getCommandFrom(const std::string& line) {
//    std::string name, valueStr;
//    bool isValue = false;
//    
//    for (char character : line) {
//        if (character == ' ') {
//            isValue = true;
//            continue;
//        }
//        if (isValue) {
//            valueStr += character;
//        } else {
//            name += character;
//        }
//    }
//    
//    std::optional<int> value = valueStr.empty() ? std::nullopt : std::optional<int>(std::stoi(valueStr));
//    return Command(name, value);
//}
//
//void handle(const Command& command, Stack& stack) {
//    if (command.name == "get_max") {
//        stack.getMax();
//    } else if (command.name == "push" && command.value) {
//        stack.push(command.value.value());
//    } else if (command.name == "pop") {
//        stack.pop();
//    } else {
//        std::cout << "Invalid command\n";
//    }
//}
//
//void solution() {
//    int size;
//    std::cin >> size;
//    Stack stack(size);
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    
//    for (int i = 0; i < size; ++i) {
//        std::string line;
//        std::getline(std::cin, line);
//        
//        if (line.empty()) break; // Exit condition if the line is empty
//        
//        Command command = getCommandFrom(line);
//        handle(command, stack);
//    }
//}
//
////int main() {
////    solution();
////    return 0;
////}
