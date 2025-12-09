#include <iostream>
using namespace std;
int main(){
string input;
string translate;

cin >> input>> translate;
bool check= false;
int size = input.length();



for (int i=0; i<size ;i++){
    if(input[i]==translate[size-i-1] && size==translate.length()){
        check=true;
    }
    else{
        check = false;
        break;
    }
}

if (check){
    cout <<"YES";
}
else{
    cout <<"NO";
}
}