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
        Node * newnode = new Node;;
        endelement->next = newnode;
        newnode->next=NULL;
        newnode->data=x;
        
    }
        void addspec(int value , int position){
        Node new_node;

        Node *x;
        x = head ;
        int c =1;

        while (x != NULL & c == position -1 )
        {
            x = x ->next;
            c++;
        }

        new_node.next = x->next;
        x->next = &new_node;

    }
void deletefirst(){
        if(head != NULL){
            head = head->next;
        }
    }

    void deleteend(){
        if(head != NULL){
            if(head->next == NULL){
                head = NULL;
            }
            else{
                Node *x = head;
                while(x->next->next != NULL){
                    x = x->next;
                }
                x->next = NULL;
            }
        }
    }

    void deletespec(int pos){
        if(head != NULL){
            if(pos == 1){
                head = head->next;
            }
            else{
                Node *x = head;
                int c = 1;
                while(x != NULL && c < pos - 1){
                    x = x->next;
                    c++;
                }
                if(x != NULL){ 
                   if(x->next != NULL){
                       x->next = x->next->next;
                   }
                }
            }
        }
    }

};

class circularlist{
public:
    Node * head;
    circularlist(){
        head = NULL;
    }

    void add(int x){
        Node *n = new Node;
        n->data = x;
        
        if(head == NULL){
            head = n;
            n->next = head;
        }
        else{
            Node *temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = n;
            n->next = head;
        }
    }

    void merge(circularlist list2){
        if(head != NULL){
            if(list2.head != NULL){
                Node *last1 = head;
                while(last1->next != head){
                    last1 = last1->next;
                }
                Node *last2 = list2.head;
                while(last2->next != list2.head){
                    last2 = last2->next;
                }
                last1->next = list2.head;
                last2->next = head;
            }
        }
    }
};

struct DNode{
    int data;
    DNode * next;
    DNode * prev;
};

class doublylist{
public:
    DNode * head;
    doublylist(){
        head = NULL;
    }

    void addfirst(int x){
        DNode *n = new DNode;
        n->data = x;
        n->prev = NULL;
        n->next = head;
        if(head != NULL){
            head->prev = n;
        }
        head = n;
    }

    void addend(int x){
        DNode *n = new DNode;
        n->data = x;
        n->next = NULL;
        if(head == NULL){
            n->prev = NULL;
            head = n;
        }
        else{
            DNode *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = n;
            n->prev = temp;
        }
    }

    void addspec(int x, int pos){
        if(pos == 1){
            addfirst(x);
        }
        else{
            DNode *n = new DNode;
            n->data = x;
            DNode *temp = head;
            int c = 1;
            while(temp != NULL && c < pos - 1){
                temp = temp->next;
                c++;
            }
            if(temp != NULL){
                n->next = temp->next;
                n->prev = temp;
                if(temp->next != NULL){
                    temp->next->prev = n;
                }
                temp->next = n;
            }
        }
    }
};

int main(){

    return 0;
}   