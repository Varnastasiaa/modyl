#include "../Ex1.h"

bool test_find_min_max_basic() {
    vector<int> numbers = {5, 2, 9, 1, 7};
    return findMinimum(numbers) == 1 && findMaximum(numbers) == 9;
}

bool test_find_min_max_with_negative() {
    vector<int> numbers = {-4, -10, 3, 0};
    return findMinimum(numbers) == -10 && findMaximum(numbers) == 3;
}

bool test_empty_container_exception() {
    vector<int> numbers;

    try {
        findMinimum(numbers);
    } catch (EmptyContainerException error) {
        return true;
    }

    return false;
}

int main() {
    if (test_find_min_max_basic()) {
        cout << "Test 1 passed\n";
    } else {
        cout << "Test 1 failed\n";
    }

    if (test_find_min_max_with_negative()) {
        cout << "Test 2 passed\n";
    } else {
        cout << "Test 2 failed\n";
    }

    if (test_empty_container_exception()) {
        cout << "Test 3 passed\n";
    } else {
        cout << "Test 3 failed\n";
    }

    return 0;
}
