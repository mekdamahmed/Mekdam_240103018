#include <iostream>
using namespace std;
int main(){
    int n;
    int counter =0;
    int x;
    int y;
    int z;

    cin >> n;
    for(int i =1 ; i<=n; i++){
        cin >> x;
        cin >> y;
        cin >> z;
        if (x+y+z >=2){
            counter++;
            cout << x << y << z <<'\n'; 
        };
    };
    cout << counter;
}