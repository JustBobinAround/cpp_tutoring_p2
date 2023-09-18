#include <iostream>

int main() {
    // Use ANSI escape codes to change text color to red
    std::cout << "\033[1;31mThis text is red.\033[0m" << std::endl;

    return 0;
}

