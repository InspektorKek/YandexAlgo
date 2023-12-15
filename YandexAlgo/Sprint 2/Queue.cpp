////
////  Queue.cpp
////  YandexAlgo
////
////  Created by Mikhail Borisov on 21/11/23.
////
//
//#include <iostream>
//#include <vector>
//
//struct Queue {
//public:
//    Queue(int size)
//    : maxElements(size) {
//        array.resize(size);
//    }
//    
//    void push(int value) {
//        if (size < maxElements) {
//            array[tail] = value;
//            tail = (tail + 1) % maxElements;
//            ++size;
//        }
//    }
//    
//    int pop() {
//        if (size == 0) {
//            return NULL;
//        }
//        
//        int value = array[head];
//        head = (head + 1) % maxElements;
//        --size;
//        return value;
//    }
//    
//    bool isEmpty() { 
//        return size == 0;
//    }
//    
//private:
//    std::vector<int> array;
//    int head = 0;
//    int tail = 0;
//    int size = 0;
//    int maxElements;
//};
