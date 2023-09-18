#include <iostream>

int main() {
    int arraySize;

    // Get the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> arraySize;

    // Dynamically allocate an integer array on the heap
    int* dynamicArray = new int[arraySize];

    // Check if memory allocation was successful
    if (dynamicArray == nullptr) {
        std::cerr << "Memory allocation failed." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Populate the array (for example, initializing it with values)
    for (int i = 0; i < arraySize; i++) {
        dynamicArray[i] = i * 10; // Set some example values
    }

    // Access and use the dynamic array as needed

    // Don't forget to free the allocated memory when done
    delete[] dynamicArray;

    return 0;
}

