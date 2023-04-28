#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <vector>

template <typename T>
class Queue {
private:
    std::vector<T> data;

public:
    Queue() {}

    void push(const T& value) {
        data.push_back(value);
    }

    void pop() {
        data.erase(data.begin());
    }

    T& front() {
        return data.front();
    }

    bool empty() const {
        return data.empty();
    }
};

#endif