#include <iostream>
using namespace std;
#define size 10;

// stack implemmentation
class stack {
    public:
int top;
int arr[size];

stack(){
    int top =-1;
}

bool 



void push (int x){
    if (top>=size-1){
        cout << "Stack full";
    }
    else{
        arr[++top] = x;
        cout << arr[top];
    }
}



void pop (){

    if (top<0){
        cout << "Stack empty";
    }
    else{
        cout << arr[top--];

    }
}

void print_stack(){
    cout << arr[top];
}



class queuee {
    int a[6];
    int rear;
    int front;
    queuee(){
        front=-1;
        rear=0;
    }
    int enqueue (int x){
        front =0;
        rear=
    }

    int dequeue (){

    }

}
};

int main(){
    stack s1;
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(10);
    s1.push(9);
    s1.push(3);
    s1.push(4);
    s1.push(1);
    s1.push(2);
    s1.push(7);

    return 0;
}






// data structure: primative(بحجز مكان واحد بس) - non primative(مش بدائية نوعين liner(array, ورا بعض) , non liner(مش ورا بعض))
