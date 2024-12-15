#ifndef STACK_H
#define STACK_H

#include <stdexcept>
#include "C:/Users/Admin/VSCODE/Array/Array/Array.h"

template<typename T>
class Stack {
private:
    Array<T> data;

public:
    Stack() : data() {}

    void clear() {
        data.clear();
    }

    T pop() {
        if (data.getSize() == 0) {
            throw std::out_of_range("Stack is empty");
        }
        T topElement = data[data.getSize() - 1];
        data.erase(data.getSize() - 1);
        return topElement;
    }

    T top() const {
        if (data.getSize() == 0) {
            throw std::out_of_range("Stack is empty");
        }
        return data[data.getSize() - 1];
    }

    void push(const T& value) {
        data.append(value);
    }

    bool isEmpty() const {
        return data.getSize() == 0;
    }

    size_t size() const {
        return data.getSize();
    }
};

#endif
