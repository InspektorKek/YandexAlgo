//#include <iostream>
//#include <string>
//#include <vector>
//#include <optional>
//#include <limits>
//
//struct Queue {
//public:
//    Queue(int size)
//    : maxElements(size) {
//        array.resize(size);
//    }
//    
//    /// Добавить число в очередь
//    /// - Parameter value: целое число, по модулю не превосходящее 1000
//    void push(int value) {
//        if (size < maxElements) {
//            array[tail] = value;
//            tail = (tail + 1) % maxElements;
//            ++size;
//        } else {
//            std::cout << "error\n";
//        }
//    }
//    
//    /// Удалить число из очереди и вывести на печать
//    /// - Parameter value: целое число, по модулю не превосходящее 1000
//    void pop() {
//        if (size == 0) {
//            std::cout << "None\n";;
//        } else {
//            int value = array[head];
//            head = (head + 1) % maxElements;
//            --size;
//            
//            std::cout << value << "\n";
//        }
//    }
//    
//    //peek() — напечатать первое число в очереди;
//    /// Напечатать первое число в очереди
//    void peek() {
//        if (size == 0) {
//            std::cout << "None\n";;
//        } else {
//            std::cout << array[head] << "\n";
//        }
//    }
//    
//    //size() — вернуть размер очереди;
//    void getSize() {
//        std::cout << size << "\n";
//    }
//    
//private:
//    std::vector<int> array;
//    int head = 0;
//    int tail = 0;
//    int size = 0;
//    int maxElements;
//};
//
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
//void handle(const Command& command, Queue& queue) {
//    if (command.name == "size") {
//        queue.getSize();
//    } else if (command.name == "push" && command.value) {
//        queue.push(command.value.value());
//    } else if (command.name == "pop") {
//        queue.pop();
//    } else if (command.name == "peek"){
//        queue.peek();
//    } else {
//        std::cout << "Invalid command\n";
//    }
//}
//
//void solution() {
//    int commandsCount;
//    std::cin >> commandsCount;
//    int size;
//    std::cin >> size;
//    Queue queue(size);
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    
//    for (int i = 0; i < commandsCount; ++i) {
//        std::string line;
//        std::getline(std::cin, line);
//        
//        if (line.empty()) break; // Exit condition if the line is empty
//        
//        Command command = getCommandFrom(line);
//        handle(command, queue);
//    }
//}
//
//int main() {
//    solution();
//    return 0;
//}
