//31)C++ Program to Check Prime Number By Creating a Function

#include <iostream>
using namespace std;

void prime(int n)
{
     int t=0;
            for(int i=2;i<n;i++)
            {
                if((n%i)==0){
                    t=1;
                    cout<<"\n Number "<<n<<" is not prime ";
                }
            }
            if(t==0)
                cout<<"\nNumber "<<n<<" is a prime ";
}
int main(){
    int num1;

        cout<<"\nInput the number to check Prime or not : ";
        cin>>num1;

         prime(num1);

    return 0;
}
