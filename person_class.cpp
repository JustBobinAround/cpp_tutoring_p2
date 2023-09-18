#include <iostream>
#include <string>

class Person {
public:
    // Constructor
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Member function to set the name
    void setName(std::string newName) {
        name = newName;
    }

    // Member function to set the age
    void setAge(int newAge) {
        age = newAge;
    }

    // Member function to display information about the person
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

private:
    // Private member variables
    std::string name;
    int age;
};

int main() {
    // Create an instance of the Person class
    Person person("Alice", 30);

    // Display the initial information
    std::cout << "Initial Information:" << std::endl;
    person.displayInfo();

    // Update the name and age
    person.setName("Bob");
    person.setAge(25);

    // Display the updated information
    std::cout << "\nUpdated Information:" << std::endl;
    person.displayInfo();

    return 0;
}

