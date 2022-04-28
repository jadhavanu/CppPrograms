/*32. Write a program in C++ to check whether a number is positive, negative or zero.
Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"\nCheck whether a number is positive, negative or zero : ";
    cout<<"\n---------------------------------------------------------";
    cout<<"\n Input a number : ";
    cin>>n;
    if(n==0)
        cout<<"\n number is zero";
    else if (n>0)
        cout<<"\nThe entered number is positive";
    else
        cout<<"\nThe entered number is negative";
    return 0;
}
