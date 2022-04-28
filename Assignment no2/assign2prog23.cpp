//23)C++ Program to Check Whether a Number is Prime or Not

#include <iostream>
using namespace std;

int main(){
    int num,t=0;

    cout<<"\nInput the 1st number : ";
    cin>>num;

    for(int i=2;i<num;i++)
    {
        if((num%i)==0)
            t=1;
    }
    if(t==0)
        cout<<"\nNumber "<<num<<" is a prime ";
    else
        cout<<"\nNumber "<<num<<" is  not a prime ";
    return 0;
}
