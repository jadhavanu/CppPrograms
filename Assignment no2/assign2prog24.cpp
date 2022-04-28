//24)C++ Program to Display Prime Numbers Between Two Intervals

#include <iostream>
using namespace std;

int main(){
    int num1,num2,t=0;

        cout<<"\nInput the 1st number : ";
        cin>>num1;
        cout<<"\nInput the 2nd number : ";
        cin>>num2;
        for(int j=num1;j<=num2;j++)
        {
            t=0;
            for(int i=2;i<j;i++)
            {
                if((j%i)==0)
                    t=1;
            }
            if(t==0)
                cout<<"\nNumber "<<j<<" is a prime ";
        }
    return 0;
}
