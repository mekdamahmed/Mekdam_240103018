#include <iostream>
using namespace std;

    
struct Node{
    int data;
    Node * next;
};
class linkedlist{
    Node * head;

    linkedlist(){
        head= NULL ;
    }
    void addfirst(int x){
        Node newnode;
        if (head==NULL){
            head= &newnode;
            newnode.next =NULL;
            newnode.data= x;
        }
        else{
            
            newnode.data=x;
            newnode.next=head;
            head=&newnode;
        }
    }
    void addend(int x){
        Node *endelement;
        endelement=head;
        while(endelement->next !=NULL){
            endelement=endelement->next;
        }
        Node * newnode = newnode();
        endelement->next = &newnode;
        newnode->next=NULL;
        newnode->data=x;
        
    }   
};
int main(){

    return 0;
}   