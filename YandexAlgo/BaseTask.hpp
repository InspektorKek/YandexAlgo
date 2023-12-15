//
//  BaseTask.h
//  YandexAlgo
//
//  Created by Mikhail Borisov on 12.12.23..
//

#ifndef BaseTask_hpp
#define BaseTask_hpp

class BaseTask {
public:
    virtual ~BaseTask() = default;
    virtual void solution() = 0;
};

#endif /* BaseTask_hpp */
