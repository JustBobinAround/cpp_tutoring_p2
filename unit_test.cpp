#include <iostream>
#include <cassert>

// A simple function to add two numbers
int Add(int a, int b) {
    return a + b;
}

int main() {
    // Test case 1: Test the Add function with valid inputs
    int result1 = Add(5, 3);
    assert(result1 == 8);

    // Test case 2: Test the Add function with another set of valid inputs
    int result2 = Add(-2, 7);
    assert(result2 == 5);

    // Test case 3: Test the Add function with invalid inputs
    int result3 = Add(10, -12);
    assert(result3 == -2);

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}

