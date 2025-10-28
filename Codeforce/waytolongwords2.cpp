#include <iostream>
using namespace std;
int main(){
    string inp;
    cout << "Enter a word: ";
    cin >> inp;
    if (inp.length() <=10){
        cout << inp;
    }

    else{
    cout << inp[0] << inp.length() - 2 << inp[inp.length()-1];
    }
}