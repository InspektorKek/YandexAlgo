//
//  MyDictionary.hpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 12.12.23..
//

#ifndef MyDictionary_hpp
#define MyDictionary_hpp

#include <vector>

#include "BaseTask.hpp"
#include "Pair.hpp"

template <typename K, typename V>
class MyDictuonary: public BaseTask {
private:
    std::vector<Pair<K, V>> pairs;
public:
    // getValue
    V get(const K& key) {
        for (const auto& pair : pairs) {
            if (pair.key == key) {
                return pair.value;
            }
        }
        
        return V();
    }
    
    // setValue
    void set(const K& key, const V& value) {
        for (const auto& pair : pairs) {
            if (pair.key == key) {
                pair.value = value;
                return;
            }
        }
        
        Pair<K, V> newPair(key, value);
        pairs.push_back(newPair);
    }
};

#endif /* MyDictionary_hpp */
