#include <iostream>
using namespace std; 

    class Node {
        public:
        int data;
        Node* left, *right;

        Node(int value){
            data = value;
            left= right = NULL;
        }
        
    };

    class BinarySearchTree{
        Node* root;
        BinarySearchTree(){
            root=NULL;
        }
        Node* insert(Node* r, int item){
            if(r==NULL){
0                Node* newnode = new Node(item);
                r= newnode;
            }
            else if (item <= r->data){
                r->left= insert(r->left,item);
            }
            else{
                r->right = insert(r->right,item);
            }
            return r;

        }
        void insert(int item){
            root = insert(root,item);
        }
        
        void Preorder(Node*r){
            if(r==NULL){
                return;
            }
            cout  << r->data <<"\t";
            Preorder(r->left);
            Preorder(r->right);
        }

        void inorder(Node*r){
            if(r==NULL){
                return;
            }
            inorder(r->left);
            cout << r-> data <<"\t";
            inorder(r->right);
        }

        void postorder(Node*r){
            if(r==NULL){
                return;
            }
            postorder(r->left);
            postorder(r->right);
            cout << r-> data<< "\t";
        }
    };
    
    Node* Search(Node* r,int key){
        if(r==NULL)
            return NULL;
        else if(r->data==key)
            return r;
        else if(key < r->data)
            return Search(r->left ,key);
        else return Search(r->right, key);
    }

int main(){

}