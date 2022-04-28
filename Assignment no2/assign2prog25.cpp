//25)C++ Program to Check Armstrong Number

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num,rev=0,n,r,arm=0;
    cout<<"\nInput the number to check for Armstrong or not : ";
    cin>>num;
    n=num;

    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    //cout<<"\n "<<count;
    n=num;

    while(n>0)
    {
        r=n%10;
        n=n/10;
       // rev=(rev*10)+r;
        //cout<<"\n "<<rev;
        arm=arm+ pow(r,count);
       // cout<<"\n arm="<<arm;

    }

    if(num==arm)
        cout<<"\nThe number "<<num<<" is an Armstrong Number";
    else
        cout<<"\nThe number "<<num<<" is not an Armstrong Number";
    return 0;
}

