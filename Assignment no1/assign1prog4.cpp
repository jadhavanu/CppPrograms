/*4. Write a program in C++ to print the sum of two numbers using variables.
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59
*/
#include <iostream>
using namespace std;

int main() {
    int n1,n2,sum;
    cout<<" enter two numbers:";
    cin>>n1>>n2;
    sum=n1+n2;
    cout<<"Print the sum of two numbers :";
    cout<<"\n--------------------------------";
    cout<<"\n The sum of "<<n1<<" and "<<n2<<" is :"<<sum;
    return 0;
}

