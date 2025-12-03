/*
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
InputCopy
ApPLe
OutputCopy
ApPLe
InputCopy
konjac
OutputCopy
Konjac

*/
#include <iostream>
using namespace std;
int main(){
string input;

cin >> input;

/*
int capital_ascii_codes[26] = {
        65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
        78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90
    };    
*/

if (input[0]>=65 && input[0]<=90){
    for(char inp: input){
        cout << inp;
    }
}
else{
    input[0] = input[0]-32;
    for(char inp: input){
    cout << inp;
    }
}
}