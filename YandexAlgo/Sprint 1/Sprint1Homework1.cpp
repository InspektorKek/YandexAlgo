//
//  
//  Sprint1Homework1.cpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 10/11/23.
//
//

#include <iostream>
#include <vector>

using namespace std;

// MARK: - Your solution

class Sprint1Homework1 {
    
    // https://contest.yandex.ru/contest/22450/run-report/89317784/
public:
    // Time complexity = O(n)
    // Size complexity = O(n). Can be O(1) if we just reuse homes variable
    vector<int> calculateDistances(const vector<int>& street) {
        int n = street.size();
        vector<int> distances(n, n);
        int lastZero = -1;
        
        // Iterate from forward to find nearest 0 on the left.
        for (int i = 0; i < n; ++i) {
            if (street[i] == 0) {
                lastZero = i;
                distances[i] = 0;
            } else if (lastZero != -1) {
                distances[i] = i - lastZero;
            }
        }
        
        // Iterate from toward to find nearest 0 on the right.
        lastZero = -1;
        for (int i = n - 1; i >= 0; --i) {
            if (street[i] == 0) {
                lastZero = i;
            } else if (lastZero != -1) {
                distances[i] = min(distances[i], lastZero - i);
            }
        }
        
        return distances;
    }
    
    void solution() {
        int homeCounts;
        std::cin >> homeCounts;
        std::vector<int> homes(homeCounts);
        for (int i = 0; i < homeCounts; ++i) {
            std::cin >> homes[i];
        }
        
        vector<int> distances = calculateDistances(homes);
        for (int distance : distances) {
            cout << distance << " ";
        }
    }
};
