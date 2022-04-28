//26)C++ Program to Display Armstrong Number Between Two Intervals

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num1,num2,rev=0,n,r,arm=0;
    cout<<"\nInput the range numbers to check Armstrong numbers : ";
    cout<<"\nInput the starting number : ";
    cin>>num1;
    cout<<"\nInput the last number : ";
    cin>>num2;

    for(int i=num1;i<=num2;i++)
    {

        n=i;

        int count = 0;
        while (n != 0)
        {
            n = n / 10;
            ++count;
        }
        //cout<<"\n "<<count;
        n=i;
        arm=0;

        while(n>0)
        {
            r=n%10;
            n=n/10;
            arm=arm+ pow(r,count);
        }

        if(i==arm)
            cout<<"\nThe number "<<i<<" is an Armstrong Number";
        //else
            //cout<<"\nThe number "<<i<<" is not an Armstrong Number";
    }
    return 0;
}
