#include <iostream>
using namespace std;
int main(){
    int x;
    string inp;
    int n;


    cin >> n;

    for (int i=1 ; i<=n ;i++){
        cout << i ;

        cin >> inp;
        if (inp =="x++" || inp == "++x"){
            x++;
        }
        else if (inp =="x--" || inp == "--x") {
            x--;
        }
        else{

            i=1;
        }
    }
    cout <<  x;
}

