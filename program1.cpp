#include <iostream>
int main() {
    const int size = 11; // Even numbers from 0 to 20 inclusive
    int evenNumbers[size];

    // Fill the array with even numbers between 0 and 20
    for (int i = 0; i < size; ++i) {
        evenNumbers[i] = i * 2;
    }

    // Print the array
    std::cout << "Even numbers from 0 to 20:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << evenNumbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}