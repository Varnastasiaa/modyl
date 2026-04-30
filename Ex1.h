#pragma once
#include <iostream>
#include <vector>

using namespace std;

class EmptyContainerException {
};

vector<int> readVector() {
    vector<int> numbers;
    int n;

    cout << "Enter count of numbers: " << flush;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        numbers.push_back(value);
    }

    return numbers;
}

int findMinimum(const vector<int>& numbers) {
    if (numbers.empty()) {
        throw EmptyContainerException();
    }

    vector<int>::const_iterator it = numbers.begin();
    int minimum = *it;

    while (it != numbers.end()) {
        if (*it < minimum) {
            minimum = *it;
        }

        it++;
    }

    return minimum;
}

int findMaximum(const vector<int>& numbers) {
    if (numbers.empty()) {
        throw EmptyContainerException();
    }

    vector<int>::const_iterator it = numbers.begin();
    int maximum = *it;

    while (it != numbers.end()) {
        if (*it > maximum) {
            maximum = *it;
        }

        it++;
    }

    return maximum;
}
