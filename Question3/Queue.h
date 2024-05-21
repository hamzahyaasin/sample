#include <iostream>
using namespace std;

template <class T>
class Queue {
private:
    int front;
    int rear;
    T *data;
    int size;
public:
    Queue(int size=10) {
        front = -1;
        rear = -1;
        this->size = size;
        data = new T[size];
    }

    ~Queue() {
        delete[] data;
    }

    void enqueue(T item);
    T dequeue();
    bool isEmpty();
    bool isFull();
    T rearValue();
    T frontValue();
};

template <class T>
void Queue<T>::enqueue(T item) {
    if (rear == size - 1) {
        cerr << endl << "Overflow";
    } else if (rear == -1 && front == -1) {
        rear++;
        front++;
        data[rear] = item;
    } else {
        rear++;
        data[rear] = item;
    }
}

template<class T>
T Queue<T>::dequeue() {
    if (isEmpty()) {
        cerr << endl << "Underflow";
        return T(); 
    } else {
        T item = data[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
        return item;
    }
}

template <class T>
bool Queue<T>::isEmpty() {
    return (front == -1 && rear == -1);
}

template<class T>
bool Queue<T>::isFull() {
    return (rear == size - 1);
}

template<class T>
T Queue<T>::frontValue() {
    if (isEmpty()) {
        cerr << endl << "Underflow";
        return T(); 
    } else {
        return data[front];
    }
}

template<class T>
T Queue<T>::rearValue() {
    if (isEmpty()) {
        cerr << endl << "Underflow";
        return T(); 
    } else {
        return data[rear];
    }
}
