#include <iostream>
#include <exception>

// Custom exception class
class InvalidValueException : public std::exception {
public:
    // Override the what() method
    const char* what() const noexcept override {
        return "Age cannot be negative or exceed 120.";
    }
};

// Function to validate age
void validateAge(int age) {
    if (age < 0 || age > 120) {
        throw InvalidValueException();
    }
}

int main() {
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;

    try {
        validateAge(age);
        std::cout << "Age is valid.\n";
    } catch (const InvalidValueException& e) {
        std::cout << "Error: InvalidValueException\n- " << e.what() << std::endl;
    }

    return 0;
}
