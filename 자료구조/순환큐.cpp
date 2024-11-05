#include <iostream>
#include <vector>
#include <stdexcept>

const int maxsize = 10;

template <typename T>
class Queue {
public:
    Queue();
    void push(T val);
    void pop();
    bool full() const;
    bool empty() const;
    T front() const;
    int size() const;

private:
    T queue[maxsize];
    int queue_front;
    int queue_back;
    int count;
};

template <typename T>
Queue<T>::Queue() : queue_front(0), queue_back(0), count(0) {}

template <typename T>
void Queue<T>::push(T val) {
    if (full()) {
        throw std::out_of_range("Queue is full");
    }
    queue[queue_back++] = val;
    count++; queue_back %= maxsize;
}

template <typename T>
void Queue<T>::pop() {
    if (empty())
        throw std::runtime_error("Queue is empty.");
    queue_front++;
    count--; queue_front %= maxsize;
}

template<typename T>
bool Queue<T>::full() const {
    return count == maxsize;
}

template <typename T>
bool Queue<T>::empty() const {
    return count == 0;
}

template <typename T>
T Queue<T>::front() const {
    if (empty()) {
        throw std::runtime_error("Queue is empty.");
    }
    return queue[queue_front];
}

template <typename T>
int Queue<T>::size() const {
    return count;
}

template <typename T>
std::string getTypeName() {
    return typeid(T).name();
}

template <>
std::string getTypeName<int>() {
    return "int";
}

template <>
std::string getTypeName<std::string>() {
    return "std::string";
}

int main() {
    {
        Queue<int> intQueue;
        try {
            for (int i = 1; i <= maxsize; i++) {
                intQueue.push(i * 10);
            }

            intQueue.push(100);

        } catch (const std::exception& e) {
            std::cout << getTypeName< decltype(intQueue.front()) >() << "_Queue : " << e.what() << std::endl;
        }
    }
    {
        Queue<std::string> strQueue;
        try {
            strQueue.pop();
        } catch (const std::exception& e) {
            std::cout << getTypeName<decltype(strQueue.front())>() << "_Queue : " << e.what() << std::endl;
        }
    }

    return 0;
}