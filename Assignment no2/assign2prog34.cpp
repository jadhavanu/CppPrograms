//34)C++ program to Calculate Factorial of a Number Using Recursion


#include <iostream>
using namespace std;

int fact(int n)
{
        if(n>1)
            return(n*fact(n-1));
}
int main(){
    int num1;

        cout<<"\nInput the number to calculate factorial : ";
        cin>>num1;
        cout<<"\nFactorial of "<<num1<<" is : ";
        cout<<fact(num1);

    return 0;
}
