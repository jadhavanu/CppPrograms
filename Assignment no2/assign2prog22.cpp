//22)C++ Program to Check Whether a Number is Palindrome or Not

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num,rev=0,n,r;
    cout<<"\nInput the number to Check for Palindrome or not : ";
    cin>>num;
    n=num;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
        //cout<<"\n "<<rev;
    }

    if(num==rev)
        cout<<"\nNumber "<<num<<" is a Palindrome";
    else
        cout<<"\nNumber "<<num<<" is not a Palindrome";
return 0;
}
