#include <iostream>
using namespace std;
int main(){
string input="code";
string translate="edoc";
bool check= false;
int size = input.length();
int anothersize=size;


for (int i=0; i<size/2 ;i++){
    if(input[i]==translate[anothersize]){
        anothersize--;
        check=true;
    }
}


if (check==true){
    cout <<"YES";
}
else{
    cout <<"NO";
}
}