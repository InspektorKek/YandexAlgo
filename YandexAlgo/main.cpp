//
//  main.cpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 12.12.23..
//

#include <vector>
#include <memory>

#include "S4G.hpp"

int main() {
    std::vector<std::unique_ptr<BaseTask>> tasks;
    
    tasks.push_back(std::make_unique<S4G>());
    
    for (auto& task : tasks) {
        task->solution();
    }
    
    return 0;
}
