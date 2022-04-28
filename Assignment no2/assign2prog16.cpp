//16)C++ Program to Reverse a Number

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num,rev=0,n,r;
    cout<<"\nInput the number to reverse : ";
    cin>>num;
    n=num;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
        //cout<<"\n "<<rev;
    }
    cout<<"\n Reverse number of "<<num<<" is : "<<rev;
    return 0;
}
