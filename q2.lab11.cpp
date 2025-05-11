#include <iostream>
#include <exception>

// Exception: Stack is full
class StackOverflowException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Stack is full!";
    }
};

// Exception: Stack is empty
class StackUnderflowException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Stack is empty!";
    }
};

// Template Stack class
template <typename T>
class Stack {
private:
    static const int capacity = 5; // Fixed capacity
    T data[capacity];
    int top;

public:
    Stack() : top(-1) {}

    void push(const T& value) {
        if (top >= capacity - 1) {
            throw StackOverflowException();
        }
        data[++top] = value;
    }

    T pop() {
        if (top < 0) {
            throw StackUnderflowException();
        }
        return data[top--];
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == capacity - 1;
    }
};

// Demonstration
int main() {
    Stack<int> s;

    std::cout << "Pushing to a full stack:\n";
    try {
        for (int i = 0; i < 6; ++i) {
            s.push(i);
            std::cout << "Pushed: " << i << std::endl;
        }
    } catch (const StackOverflowException& e) {
        std::cout << "StackOverflowException\n- " << e.what() << std::endl;
    }

    std::cout << "\nPopping from a stack:\n";
    try {
        for (int i = 0; i < 6; ++i) {
            int val = s.pop();
            std::cout << "Popped: " << val << std::endl;
        }
    } catch (const StackUnderflowException& e) {
        std::cout << "StackUnderflowException\n- " << e.what() << std::endl;
    }

    return 0;
}
