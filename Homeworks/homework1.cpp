#include <iostream>
#define size 10
using namespace std;

class Stack {
public:
    int top;
    int arr[size];

    Stack() {
        top = -1;
    }

    bool isFull() {
        if (top == size - 1) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack is Full" << endl;
        }
        else {
            top++;
            arr[top] = x;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
        }
        else {
            cout << arr[top] << endl;
            top--;
        }
    }
};


class Queue {
public:
    int front;
    int rear;
    int arr[size];

    Queue() {
        front = 0;
        rear = -1;
    }

    bool isFull() {
        if (rear == size - 1) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isEmpty() {
        if (front > rear) {
            return true;
        }
        else {
            return false;
        }
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full" << endl;
        }
        else {
            rear++;
            arr[rear] = x;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
        }
        else {
            cout << arr[front] << endl;
            front++;
        }
    }
};

int main() {
    Queue q;
    Stack s;
    s.push(10);
    s.push(20);
    s.pop();
    q.enqueue(5);
    q.enqueue(10);
    q.dequeue();


}