#include <iostream>

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int top;             // Index of the top element
    int arr[MAX_SIZE];   // Array to store stack elements

public:
    Stack() {
        top = -1;        // Initialize the top index to -1 (empty stack)
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            std::cout << "Stack Overflow! Cannot push element " << value << ".\n";
            return;
        }
        arr[++top] = value; // Increment top and insert the value
        std::cout << "Pushed element " << value << " onto the stack.\n";
    }

    // Function to pop an element from the stack
    int pop() {
        if (top < 0) {
            std::cout << "Stack Underflow! The stack is empty.\n";
            return -1; // Return a sentinel value to indicate an empty stack
        }
        int value = arr[top--]; // Get the top element and decrement top
        return value;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to get the top element of the stack without removing it
    int peek() {
        if (top < 0) {
            std::cout << "The stack is empty.\n";
            return -1; // Return a sentinel value to indicate an empty stack
        }
        return arr[top];
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.peek() << std::endl;

    std::cout << "Popped element: " << myStack.pop() << std::endl;
    std::cout << "Popped element: " << myStack.pop() << std::endl;

    std::cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
