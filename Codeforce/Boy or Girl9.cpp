#include <iostream>
using namespace std;


bool check(char inp, char arr[], int size) {  
    for (int i = 0; i < size; i++) {
        if (arr[i] == inp) {
            return true;
        }
    }
    return false; 
}



int main(){
string username;
cin >> username;
char newarr[50];
int sizecounter=0;


for (char i : username) {
        
        if (check(i, newarr, sizecounter)) {
            continue; 
        }
        else {
            newarr[sizecounter] = i;
            sizecounter++;
        }
}

if (sizecounter%2 ==0){
    cout << "CHAT WITH HER!";
}
else{
    cout <<"IGNORE HIM!";
}

}