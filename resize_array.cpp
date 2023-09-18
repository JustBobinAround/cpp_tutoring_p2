#include <iostream>

int main() {
    int* dynamicArray = nullptr;
    int currentSize = 0;

    // Get the initial size of the array from the user
    std::cout << "Enter the initial size of the array: ";
    std::cin >> currentSize;

    // Dynamically allocate an integer array on the heap
    dynamicArray = new int[currentSize];

    // Check if memory allocation was successful
    if (dynamicArray == nullptr) {
        std::cerr << "Memory allocation failed." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Populate the array (for example, initializing it with values)
    for (int i = 0; i < currentSize; i++) {
        dynamicArray[i] = i * 10; // Set some example values
    }

    // Display the current contents of the array
    std::cout << "Current Array Contents:" << std::endl;
    for (int i = 0; i < currentSize; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Resize the array to a new size
    int newSize;
    std::cout << "Enter the new size of the array: ";
    std::cin >> newSize;

    // Create a new larger array
    int* newDynamicArray = new int[newSize];

    // Copy elements from the old array to the new array
    for (int i = 0; i < std::min(currentSize, newSize); i++) {
        newDynamicArray[i] = dynamicArray[i];
    }

    // Deallocate memory of the old array
    delete[] dynamicArray;

    // Update the pointer to point to the new array
    dynamicArray = newDynamicArray;
    currentSize = newSize;

    // Display the resized array's contents
    std::cout << "Resized Array Contents:" << std::endl;
    for (int i = 0; i < currentSize; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Don't forget to free the allocated memory when done
    delete[] dynamicArray;

    return 0;
}

