// main.cpp
#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<int> q1(3);
    q1.enqueue(12);
    q1.enqueue(32);
    q1.enqueue(5);

    cout << endl << q1.dequeue();
    cout << endl << q1.dequeue();
    cout << endl << q1.dequeue();

    return 0;
}
