/*


A. Next Round
time limit per test3 seconds
memory limit per test256 megabytes
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

Input
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

Output
Output the number of participants who advance to the next round.


*/

#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    int temp;

    int k;

    cout << "Enter the number of members: ";
    cin >> temp;    
    int a[temp];
    cout << "Enter the minimum: ";
    cin >> k;
    for (int i=0 ; i<temp ; i++){
        cout << "member number " << i+1 <<" :" ;
        cin >> n;
        a[i]=n;
    };
    
    //sort();

    for (int x =0 ; x<temp ;x++){
        if (a[x]<a[k-1]){
            cout << "\n"<< x-1;
        }
    }
    

    
}