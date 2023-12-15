//
//  F.h
//  YandexAlgo
//
//  Created by Mikhail Borisov on 12.12.23..
//

#ifndef F_hpp
#define F_hpp

#include "BaseTask.hpp"

#include <string>

class F: public BaseTask {
public:
    void solution() override;
private:
    bool areLettersEqualIgnoreCase(char a, char b);
    std::string keepAlpthabeticOnly(std::string sentence);
};

#endif /* F_hpp */
