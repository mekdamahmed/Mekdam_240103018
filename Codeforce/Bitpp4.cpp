#include <iostream>
using namespace std;
int main(){
    int x;
    string inp;
    int n;

    cout << "enter number of inputs: ";
    cin >> n;

    for (int i=1 ; i<=n ;i++){
        cout << "Input number: " << i <<"\n";
        cout << "Your operation(x++/++x , --x/x--):" ;
        cin >> inp;
        if (inp =="x++" || inp == "++x"){
            x++;
        }
        else if (inp =="x--" || inp == "--x") {
            x--;
        }
        else{
            cout<<"wrong please enter again" << "\n";
            i=1;
        }
    }
    cout << "x="<< x;
}

