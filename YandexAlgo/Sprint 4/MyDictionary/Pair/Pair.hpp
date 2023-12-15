//
//  Pair.hpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 12.12.23..
//

#ifndef Pair_hpp
#define Pair_hpp

#include <stdio.h>

template <typename K, typename V>
class Pair {
    K key;
    V value;
    
    Pair(K k, V v) 
    : key(k),
      value(v) {}
};

#endif /* Pair_hpp */
