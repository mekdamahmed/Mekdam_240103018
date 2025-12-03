#include <iostream>
using namespace std;
int main(){
int number;
int times;
cin >> number >> times;
for (int i=1 ; i<=times ;i++){
if (number%10==0){
    number = number /10;
}
else{
    number = number -1;
}
}

cout << number;
}