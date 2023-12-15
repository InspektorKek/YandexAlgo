//
//  Sprint2Homework1.cpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 12/11/23.
//
//
/*
 MARK: - Test link: https://contest.yandex.ru/contest/22781/run-report/98796629/
 
-- ЗАДАЧА --
Реализовать структуру данных - Дек используюя кольцевой буфер.
Методы которые должны быть реализованы:
 1. push_back(x)
 2. push_front(x)
 3. pop_back()
 4. pop_front()
!!!ВАЖНО!!! -- Временная сложность операций доджна быть О(1).
 
-- ПРИНЦИП РАБОТЫ --
Дек реализован с помощью кольцевого буфера с возможностью добавлять и удалять элементы с начала и с конца дэка.
Под капотом дэк использует Contigious array с выделенной памятью на определенное количество элементов.
 Детали:
1. Реализация добавления и удаления на конце очереди: идентична реализации очереди - трэкаем индекс конца текущего массива.
2. Реализации добавления и удаления в начале очереди: схожа с реализацией на конце очереди, с одним ньюансом - используем максимальное количество элементов в вычислении для того чтобы обработать нулевой индекс и получить последний интекс массива. Так же нужно обновлять индекс перед удалением/добавлением

-- ДОКАЗАТЕЛЬСТВО КОРРЕКТНОСТИ --
 Корректность реализации дека с использованием кольцевого буфера основывается на точном управлении индексами начала и конца очереди и фиксированном массиве.

-- ВРЕМЕННАЯ СЛОЖНОСТЬ --
Добавление в конец/начало дэка и удаление с конца/начала дека в худшем и лучшем случае будет константным О(1).
Почему:
 1. Массив не динамический, поэтому не будет проиходить расширение и перенос буфера при добавлении нового элемента. Соответственно все операции будут выполнять за О(1).
 2. Обращение к элементу массива по индексу так же выполняется за О(1).
 3. Присутствуют калькуляции, которые так же выполняются за О(1)

-- ПРОСТРАНСТВЕННАЯ СЛОЖНОСТЬ --
Количество входных данных n идентично размеру массива внутри реализации дэка. Значит дек будет потреблять О(n) памяти.
*/

//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <optional>
//#include <limits>
//
//struct Command {
//    std::string name;
//    std::optional<int> value;
//    
//    Command(const std::string& name, std::optional<int> value)
//    : name(name), value(value) {}
//};
//
///// Реализация структуры данных Deck использую кольцевой буфер.
//struct Deck {
//public:
//    Deck(int maxElements)
//    : maxElements(maxElements)
//    {
//        array.resize(maxElements);
//    }
//    
//    /// Добавляет элемент в конец дека. Если в деке уже находится максимальное число элементов, выводит «error».
//    /// - Parameter value: целое число, по модулю не превосходящее 1000
//    void pushBack(int value) {
//        if (size < maxElements) {
//            array[tail] = value;
//            tail = (tail + 1) % maxElements;
//            ++size;
//        } else {
//            std::cout << "error\n";
//        }
//    }
//    
//    /// Добавляет элемент в начало дека. Если в деке уже находится максимальное число элементов, выводит «error».
//    /// - Parameter value: целое число, по модулю не превосходящее 1000
//    void pushFront(int value) {
//        if (size < maxElements) {
//            head = (head - 1 + maxElements) % maxElements;
//            array[head] = value;
//            ++size;
//        } else {
//            std::cout << "error\n";
//        }
//    }
//    
//    /// Выводит  первый элемент дека и удаляет его. Если дек был пуст, то выводит «error».
//    void popBack() {
//        if (!isEmpty()) {
//            tail = (tail - 1 + maxElements) % maxElements;
//            int value = array[tail];
//            std::cout << value << "\n";
//            array[tail] = NULL;
//            --size;
//        } else {
//            std::cout << "error\n";
//        }
//    }
//    
//    /// Выводит последний элемент дека и удалить его. Если дек был пуст, то выведет «error».
//    void popFront() {
//        if (!isEmpty()) {
//            int value = array[head];
//            std::cout << value << "\n";
//            array[head] = NULL;
//            head = (head + 1) % maxElements;
//            --size;
//        } else {
//            std::cout << "error\n";
//        }
//    }
//    
//private:
//    std::vector<int> array;
//    int head = 0;
//    int tail = 0;
//    int size = 0;
//    int maxElements;
//    
//    bool isEmpty() {
//        return size == 0;
//    }
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
//void handle(const Command& command, Deck& deck) {
//    if (command.name == "push_back" && command.value) {
//        deck.pushBack(command.value.value());
//    } else if (command.name == "push_front" && command.value) {
//        deck.pushFront(command.value.value());
//    } else if (command.name == "pop_back") {
//        deck.popBack();
//    } else if (command.name == "pop_front"){
//        deck.popFront();
//    } else {
//        std::cout << "Invalid command\n";
//    }
//}
//
//int main() {
//    int commandsCount;
//    std::cin >> commandsCount;
//    int size;
//    std::cin >> size;
//    Deck deck(size);
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    
//    for (int i = 0; i < commandsCount; ++i) {
//        std::string line;
//        std::getline(std::cin, line);
//        
//        if (line.empty()) break;
//        
//        Command command = getCommandFrom(line);
//        handle(command, deck);
//    }
//}
