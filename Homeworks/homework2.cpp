#include <iostream>
#include <string>

#define size 100
using namespace std;

class Stack{
public:
    int top;
    int arr[size];

    Stack(){
        top = -1;
    }

    bool isFull(){
        if (top == size - 1) {
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if (top == -1) {
            return true;
        }
        else{
            return false;
        }
    }

    void push(int x){
        if (isFull()) {
            cout << "Stack Full";
        }
        else{
            top++;
            arr[top] = x;
        }
    }

    int pop(){
        if (isEmpty()){
            return -1;
        }
        else{
            int val = arr[top];
            top--;
            return val;
        }
    }

    int peek(){
        if (isEmpty()){
            return -1;
        }
        else{
            return arr[top];
        }
    }
};

string infixToPostfix(string infix) {
    Stack stack;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++){
        char character = infix[i];

        if (character >= '0' && character <= '9') {
            postfix += character;
            postfix += " ";
        }
        else if (character == '(') {
            stack.push(character);
        }
        else if (character == ')') {
            while (!stack.isEmpty()){
                if (stack.peek() == '('){
                    stack.pop();
                    break;
                }
                postfix += (char)stack.pop();
                postfix += " ";
            }
        }
        else{
            int currentPriority = 0;
            if (character == '*' || character == '/'){
                currentPriority = 2;
            }
            else{
                currentPriority = 1;
            }

            while(!stack.isEmpty()){
                char topCharacter = (char)stack.peek();
                
                if (topCharacter == '('){
                    break;
                }

                int stackPriority = 0;
                if (topCharacter == '*' || topCharacter == '/'){
                    stackPriority = 2;
                }
                else {
                    stackPriority = 1;
                }

                if (currentPriority <= stackPriority){
                    postfix += (char)stack.pop();
                    postfix += " ";
                }
                else{
                    break;
                }
            }
            stack.push(character);
        }
    }

    while (!stack.isEmpty()){
        postfix += (char)stack.pop();
        postfix += " ";
    }
    return postfix;
}

int evaluatePostfix(string postfix) {
    Stack stack;

    for (int i = 0; i < postfix.length(); i++){
        char character = postfix[i];

        if (character == ' ') {
            continue;
        }

        if (character >= '0' && character <= '9') {
            int number = character - '0';
            stack.push(number);
        }
        else {
            int number2 = stack.pop();
            int number1 = stack.pop();
            int result = 0;

            if (character == '+') {
                result = number1 + number2;
            }
            else if (character == '-') {
                result = number1 - number2;
            }
            else if (character == '*') {
                result = number1 * number2;
            }
            else if (character == '/') {
                result = number1 / number2;
            }
            
            stack.push(result);
        }
    }
    return stack.pop();
}

int main() {
    string infix;
    cout << "Enter Expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix: " << postfix << endl;

    int finalResult = evaluatePostfix(postfix);
    cout << "Result: " << finalResult << endl;


}