#include "Ex1.h"

int main() {
    vector<int> numbers = readVector();

    try {
        int minimum = findMinimum(numbers);
        int maximum = findMaximum(numbers);

        cout << "Minimum: " << minimum << '\n';
        cout << "Maximum: " << maximum << '\n';
    } catch (EmptyContainerException error) {
        cout << "EmptyContainerException" << '\n';
        return 1;
    }

    return 0;
}
