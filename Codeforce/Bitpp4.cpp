#include <iostream>
using namespace std;
int main(){
    int x=0;
    string inp;
    int n;


    cin >> n;

    for (int i=1 ; i<=n ;i++){

        cin >> inp;
        if (inp =="X++" || inp == "++X"){
            x++;
        }
        else if (inp =="X--" || inp == "--X") {
            x--;
        }

    }
    cout <<  x;
}

