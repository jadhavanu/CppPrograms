/*C++ Program to Swap Two Numbers*/

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"\nInput the 1st number : ";
    cin>>n1;
    cout<<"\nInput the 2nd number : ";
    cin>>n2;
    cout<<"\nBefore swapping the two numbers are : "<<n1<<" "<<n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    cout<<"\nAfter swapping the two numbers are : "<<n1<<" "<<n2;
    return 0;
}

