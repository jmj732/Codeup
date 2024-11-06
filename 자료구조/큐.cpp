#include <iostream>
#include <stdexcept>

const int SIZE = 10;

class Queue {
private:
    int queue[SIZE];
    int front;
    int rear;

public:
    Queue() : front(0), rear(-1) {}

    void Enqueue(int v) {
        if (isFull()) {
            throw std::overflow_error("Queue is full");
        }
        queue[++rear] = v;
    }

    void Dequeue() {
        if (isEmpty()) {
            throw std::underflow_error("Queue is empty");
        }
        front++;
    }

    int Front() const {
        if (isEmpty()) {
            throw std::underflow_error("Queue is empty");
        }
        return queue[front];
    }

    int Rear() const {
        if (isEmpty()) {
            throw std::underflow_error("Queue is empty");
        }
        return queue[rear];
    }

    void Clear() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() const {
        return front > rear;
    }

    bool isFull() const {
        return rear + 1 == SIZE;
    }
};

int main() {
    Queue q;

    try {
        q.Enqueue(10);
        q.Enqueue(20);
        q.Enqueue(30);
        std::cout << "Front: " << q.Front() << std::endl;
        q.Dequeue();
        std::cout << "Front after Dequeue: " << q.Front() << std::endl;
        q.Clear();

        std::cout << "Attempting to call Front on empty queue:" << std::endl;
        std::cout << "Front: " << q.Front() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
