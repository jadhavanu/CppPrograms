//30)C++ Program to Display Prime Numbers Between Two Intervals Using Functions

#include <iostream>
using namespace std;

void prime(int n)
{
     int t=0;
            for(int i=2;i<n;i++)
            {
                if((n%i)==0)
                    t=1;
            }
            if(t==0)
                cout<<"\nNumber "<<n<<" is a prime ";
}
int main(){
    int num1,num2,t=0;

        cout<<"\nInput the 1st number : ";
        cin>>num1;
        cout<<"\nInput the 2nd number : ";
        cin>>num2;
        for(int j=num1;j<=num2;j++)
        {
           prime(j);
        }
    return 0;
}
