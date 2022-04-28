//32)C++ Program to Check Whether a Number can be Express as Sum of Two Prime Numbers

#include <iostream>
using namespace std;

int isprime(int n)
{
            int flag=1;
            for(int i=2;i<n;i++)
            {
                if((n%i)==0)
                    flag=0;
            }
            return flag;
}
int main(){
    int num1,flag2=1;

        cout<<"\nInput the number to check Prime or not : ";
        cin>>num1;

         for(int i=2;i<num1/2;i++)
         {
             if(isprime(i))
             {
                 if(isprime(num1-i))
                 {
                     cout<<"\nNumber "<<num1<<" is can be represented as sum of prime numbers ";
                     cout<<num1<<" = " <<i<<" + "<<num1-i;
                     flag2=0;

                 }
             }


         }
         if(flag2==1)
            cout<<"\nNumber "<<num1<<" is can not be represented as sum of prime numbers ";
            return 0;
}

