//
//  S4G.cpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 13.12.23..
//

#include <iostream>
#include <unordered_map>
#include <vector>

#include "S4G.hpp"

using namespace std;

int findLongestTieSegment(const vector<int>& rounds) {
    int balance = 0, maxLength = 0;
    unordered_map<int, int> firstOccurrence;
    firstOccurrence[0] = -1; // For balance 0 at the start

    for (int i = 0; i < rounds.size(); ++i) {
        balance += (rounds[i] == 0) ? 1 : -1;

        if (firstOccurrence.find(balance) != firstOccurrence.end()) {
            maxLength = max(maxLength, i - firstOccurrence[balance]);
        } else {
            firstOccurrence[balance] = i;
        }
    }

    return maxLength;
}

void S4G::solution() {
    /*
     Test 1: 0 0 1 0 1 0 1 1 0 0
     1. -1-1+1-1+1-1+1-1-1 = -3
     2. [0,9]
     3. [1,9] -> [2,9] - > [2,8]
     4. return 8-2+1 = 7
     
     Test 2: 0 1 0
     1. -1+1-1 = -1
     2. [0,2]
     3. [1,2] = 0
     4. return 2-1+1 = 2
     
     Test 2: 0 1
     1. -1+1 = 0
     2. return array.size()
     */
    
    int n;
    cin >> n;
    vector<int> rounds(n);

    for (int i = 0; i < n; ++i) {
        cin >> rounds[i];
    }

    cout << findLongestTieSegment(rounds) << endl;
}
