#include <iostream>
#include <exception>

using namespace std;

// Exception for negative numbers
class NegativeNumberException : public exception {
public:
    const char* what() const noexcept override {
        return "Input must be non-negative!";
    }
};

// Exception for invalid types
class InvalidTypeException : public exception {
public:
    const char* what() const noexcept override {
        return "Non-numeric type detected!";
    }
};

// Simple loop-based square root approximation
double simpleSqrt(double num) {
    double result = 0.0;
    double step = 0.0001;
    while (result * result <= num) {
        result += step;
    }
    return result - step;
}

// For numeric input
double customSqrt(double num) {
    if (num < 0)
        throw NegativeNumberException();
    return simpleSqrt(num);
}

// For invalid input like const char*
double customSqrt(const char*) {
    throw InvalidTypeException();
}

int main() {
    try {
        cout << "sqrt(-4): ";
        cout << customSqrt(-4) << endl;
    } catch (const exception& e) {
        cout << "Exception\n- " << e.what() << endl;
    }

    try {
        cout << "\nsqrt(\"hello\"): ";
        cout << customSqrt("hello") << endl;
    } catch (const exception& e) {
        cout << "Exception\n- " << e.what() << endl;
    }

    return 0;
}
