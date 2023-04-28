#include <iostream>
#include "stack.hpp"
#include "queue.hpp"

int main() {
    // Testando a pilha
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    std::cout << std::endl;

    // Testando a fila
    Queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);

    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        queue.pop();
    }
    std::cout << std::endl;

    return 0;
}