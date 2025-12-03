#include <iostream>
#define size 10

using namespace std;

class stack{

public:
int top;
int arr[size];



int test[5];



bool isFull(){
    if (top==size-1){
        return 0;
    }
    else {
        return 1;
    }
}


bool isEmpty(){
    if (top <=-1){
        return 0;
    }
    else{
        return 1;
    }
}


void push(int x){
    if (isFull()){
        cout << "Stack full";
    }
    else{
        arr[++top]=x;
    }
}

void pop(){
    if (isEmpty){
       cout << "Stack empty";
    }
    else{
        cout << arr[top--];
    }
}

int print_stack(){
    if (isEmpty){
        cout<< "Stack empty";
    }
    else{
        cout << arr[top]
    }
}

}
