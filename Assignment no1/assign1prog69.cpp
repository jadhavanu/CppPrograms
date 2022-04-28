/*69. Write a C++ program to read an integer n and prints the factorial of n, assume that n = 10.   */

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n,fact;
    cout<<"\nInput the number to get factorial : ";
    cin>>n;
    fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    cout<<"\nFactorial of "<<n<<" is : "<<fact;
    return 0;

}
