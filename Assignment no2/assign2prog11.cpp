//11)C++ Program to Find Factorial

#include <iostream>
using namespace std;

int main(){
    int num,fact=1;
    cout<<"\nInput the number to calculate Factorial : ";
    cin>>num;

   for(int i=1;i<=num;i++)
        fact=fact*i;

    cout<<"\nThe Factorial of number "<<num<<" is :"<<fact
    ;

    return 0;
}
