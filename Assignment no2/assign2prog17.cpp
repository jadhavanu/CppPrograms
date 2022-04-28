//17)C++ Program to Calculate Power of a Number

#include <iostream>
using namespace std;

int main(){
    int num,pow,ans=1;
    cout<<"\nInput the number  : ";
    cin>>num;
    cout<<"\nInput the power : ";
    cin>>pow;

   for(int i=1;i<=pow;i++)
        ans=ans*num;

    cout<<"\n"<<num<<" ^ "<<pow<<" = "<<ans ;

    return 0;
}
