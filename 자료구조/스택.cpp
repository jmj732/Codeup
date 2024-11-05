#include <iostream>

const int MAX_STACK_SIZE = 10;

template <typename T>
class Stack {
public:
    Stack(): top(-1){};
    void push(T value) {
        if (isFull()) {
            throw std::overflow_error("Stack overflow");
        }
        stack[++top] = value;
    }
    T pop() {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty");
        }
        return stack[top--];
    }
    T peek() const {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty");
        }
        return stack[top];
    }
    bool isEmpty() const {
        return top == -1;
    }
    bool isFull() const {
        return top + 1 == MAX_STACK_SIZE;
    }
private:
    T stack[MAX_STACK_SIZE];
    int top;
};

int main(){
    Stack<int> stack;
    try {
        for (int i = 1; i <= 10; i++) {
            stack.push(i * 10);
        }
        stack.push(110);
        std::cout << stack.peek() << std::endl;
    }
    catch (std::overflow_error e) {
        std::cout << e.what() << std::endl;
    }
    try {
        for (int i = 1; i <= 11; i++) {
            std::cout << stack.pop() << std::endl;
        }
        stack.pop();
    }
    catch (std::out_of_range e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}