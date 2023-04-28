#ifndef STACK_HPP
#define STACK_HPP

#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> data;

public:
    Stack() {}

    void push(const T& value) {
        data.push_back(value);
    }

    void pop() {
        data.pop_back();
    }

    T& top() {
        return data.back();
    }

    bool empty() const {
        return data.empty();
    }
};

#endif