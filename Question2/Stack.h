// Stack.h
#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    int top;
    int size;
    T *data;
public:
    Stack(int s=10) {
        top = -1;
        size = s;
        data = new T[size];
    }
    ~Stack() {
        delete[] data;
    }
    void push(T element);
    T pop();
    bool isEmpty();
    bool isFull();
    T topValue();
};

template <class T>
bool Stack<T>::isEmpty() {
    return top == -1;
}

template <class T>
bool Stack<T>::isFull() {
    return top == size - 1;
}

template <class T>
T Stack<T>::topValue() {
    if (top == -1)
        throw runtime_error("Stack Underflow");
    return data[top];
}

template <class T>
void Stack<T>::push(T element) {
    if (isFull()) {
        throw runtime_error("Stack Overflow");
    } else {
        data[++top] = element;
    }
}

template <class T>
T Stack<T>::pop() {
    if (isEmpty()) {
        throw runtime_error("Stack Underflow");
    } else {
        return data[top--];
    }
}
