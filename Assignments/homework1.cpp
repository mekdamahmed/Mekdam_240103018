#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:

    Stack() { top = NULL; }

    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }
};







class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (front == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
};

int main() {

    Stack s;
    s.push(10);
    s.push(20);

    Queue q;
    q.enqueue(10);
    q.enqueue(20);


}