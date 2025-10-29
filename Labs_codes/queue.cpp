#include <iostream>
#define size 6
using namespace std;

class queue {
public:
int front;
int rear;
int qi,c;
int arr[size];
queue(){
int rear , front;
front =0;
rear= -1; 
}
void enqueue(int x){
    if (c==qi){
        cout << "Full";
    }
    else{
        if(front ==0 && rear ==-1){
            arr[front++]=x;
            rear=0;
        }
        else{
            arr[front++]=x
        }
        
    }
}

void dequeue(){
    if(front ==0 && rear ==-1){
        cout <<"Empty";
    }
    else{
        if (c=qi){

            cout << arr[rear++0];
            front = 0;
        }
        else{
            
            cout << arr[rear++]; 
        }
    }

}

}