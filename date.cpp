#include <iostream>
#include <ctime>

int main() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Define a custom format string with month as a word
    const char* customFormat = "%Y-%B-%d %H:%M:%S";

    // Convert the current time to a string in the custom format
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), customFormat, std::localtime(&currentTime));

    // Display the current date and time with the month as a word
    std::cout << "Current Date and Time: " << buffer << std::endl;

    return 0;
}
