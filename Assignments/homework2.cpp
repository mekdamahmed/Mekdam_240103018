#include <iostream>
using namespace std;


struct Node {

    int data;
    Node* next;

};

class Stack {

    Node* top;

public:

    Stack() {
        top = NULL;

    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Empty" << endl;
            return -1;
        }
        Node* temp = top;
        int value = temp->data;
        top = top->next;
        delete temp;
        return value;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Empty" << endl;
            return -1;
        }
        return top->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Empty" << endl;
            return;
        }
        Node* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

class Queue {

    Node* front;
    Node* rear;

public:

    Queue() {
        front = NULL;
        rear = NULL;
    }

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    bool isEmpty() {
        return front == NULL;
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

    int dequeue() {

        if (isEmpty()) {
            cout << "Empty" << endl;
            return -1;
        }

        Node* temp = front;
        int value = temp->data;
        front = front->next;
        
        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
        return value;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return front->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }
        Node* current = front;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display(); 

    s.pop();

    s.display();



    Queue q;


    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);

    q.display();

    q.dequeue();

    q.display();

}