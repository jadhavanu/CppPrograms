//27)C++ Program to Display Factors of a Number

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num,i;
    cout<<"\nInput the number to find Factors : ";
    cin>>num;
    cout<<"\nFactors of "<<num<<" are : ";
    for(i=1;i<=num;i++)
    {
        if((num%i)==0)
        {
            cout<<i<<" , ";
        }
    }
    return 0;
}
