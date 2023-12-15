//
//  Homework2.cpp
//  YandexAlgo
//
//  Created by Mikhail Borisov on 7.12.23.
//

/*
MARK: - Test link: https://contest.yandex.ru/contest/23815/run-report/102219660/
 
-- ЗАДАЧА --
 Реализовать лгоритм для сортировки участников программирования по их результатам: сначала по количеству решенных задач, затем по
 штрафам и, в конце, по логинам в алфавитном порядке.
 ВАЖНО!!! Time space complexity O(log n).
 
-- ПРИНЦИП РАБОТЫ --
 1. Выбораем pivot - первый или последний элемент
 2. Перегруппируем элементы массива так, чтобы те, что меньше или равны опорному, оказались слева от него, а большие - справа.
 3. Используем указатели:
    1. Используем два указателя, начиная с обоих концов массива.
    2. Перемещаем левый указатель вправо до элемента, большего или равного опорному.
    3. Перемещаем правый указатель влево до элемента, меньшего или равного опорному.
    4. Если указатели не пересеклись, меняем местами элементы, на которые они указывают, и продолжаем движение.
 4. Рекурсивное проходим подмассивы не забывая про базовый случай
 5. Сортируем
 
-- ДОКАЗАТЕЛЬСТВО КОРРЕКТНОСТИ --
 Quick Sort работает? Работает
 
-- ВРЕМЕННАЯ СЛОЖНОСТЬ --
 Как и у обычного Quick Sort, в среднем и лучшем случае она O(n log n), а в худшем - O(n^2).

-- ПРОСТРАНСТВЕННАЯ СЛОЖНОСТЬ --
 Благодаря in-place подходу, не тратим дополнительную память на подмассивы. Единственное, что нужно - это стек для
 рекурсивных вызовов, так что пространственная сложность O(log n).
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

struct Participant {
    std::string login;
    int solved;
    int penalty;
};

bool compare(const Participant& a, const Participant& b) {
    if (a.solved != b.solved) {
        return a.solved > b.solved;
    } else if (a.penalty != b.penalty) {
        return a.penalty < b.penalty;
    } else {
        return a.login < b.login;
    }
}

void quickSort(std::vector<Participant>& participants, int low, int high) {
    if (low < high) {
        Participant pivot = participants[high];
        int left = low;
        int right = high - 1;

        while (true) {
            while (left <= right && compare(participants[left], pivot)) {
                left++;
            }
            while (right >= left && compare(pivot, participants[right])) {
                right--;
            }
            if (left >= right) break;
            std::swap(participants[left], participants[right]);
            left++;
            right--;
        }
        std::swap(participants[left], participants[high]);
        quickSort(participants, low, left - 1);
        quickSort(participants, left + 1, high);
    }
}

void solution() {
    int n;
    std::cin >> n;

    std::vector<Participant> participants(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> participants[i].login >> participants[i].solved >> participants[i].penalty;
    }

    quickSort(participants, 0, n - 1);

    for (const auto& participant : participants) {
        std::cout << participant.login << std::endl;
    }
}
