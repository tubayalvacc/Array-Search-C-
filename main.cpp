#include <iostream>

int main() {
    int index, searchNumber, arraySize, found = 0, position = -1;
    int array[10]; // Array to store user inputs

    // Prompt user to enter the size of the array
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> arraySize;

    // Prompt user to enter the elements of the array
    std::cout << "Enter the array elements: ";
    for (index = 0; index < arraySize; index++) {
        std::cin >> array[index]; // Read each element into the array
    }

    // Prompt user to enter the number to be searched
    std::cout << "Enter the number to be searched: ";
    std::cin >> searchNumber;

    // Search for the number in the array
    for (index = 0; index < arraySize; index++) {
        if (array[index] == searchNumber) {
            found = 1; // Set flag to indicate number is found
            position = index + 1; // Store position (1-based index)
            break; // Exit loop as the number is found
        }
    }

    // Output the result
    if (found == 0) {
        std::cout << "Number not found in the array!" << std::endl;
    } else {
        std::cout << "Number found at position " << position << std::endl;
    }

    return 0;
}
