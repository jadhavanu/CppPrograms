//14)C++ Program to Find GCD

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num1,num2,i,gcd=1;
    cout<<"\nInput the numbers to find GCD : ";
    cout<<"\nInput the 1st number : ";
    cin>>num1;
    cout<<"\nInput the 2nd number : ";
    cin>>num2;

    for(i=2;(i<=num1)&&(i<=num2);i++)
    {
        if(((num1%i)==0)&&((num2%i)==0))
        {
            gcd=i;
            //cout<<"\n"<<gcd;
        }
    }
    cout<<"\nGCD of "<<num1<<" and "<<num2<<" is :"<<gcd;
    return 0;
}
