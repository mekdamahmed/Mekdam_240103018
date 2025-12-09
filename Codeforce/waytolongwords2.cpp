#include <iostream>
using namespace std;
int main(){
    int size;
    string inp;
    cin >> size;

    for(int i=0;i<size;i++){
        cin >>inp;
        if (inp.length() <=10){
            cout << inp<< endl;
        }

        else{
        cout << inp[0] << inp.length() - 2 << inp[inp.length()-1]<< endl;
    }
    }

}