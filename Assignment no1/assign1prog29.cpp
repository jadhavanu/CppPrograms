/*29. Write a program in C++ to compute quotient and remainder.
Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1

*/

#include<iostream>
using namespace std;

int main(){
    int dend,dsor,que,rem;
    cout<<"\nCompute quotient and remainder : ";
    cout<<"\n--------------------------------------";
    cout<<"\nInput the dividend : ";
    cin>>dend;
    cout<<"\nInput the divisor : ";
    cin>>dsor;
    cout<<"\nThe quotient of the division is : "<<dend/dsor;
    cout<<"\n The remainder of division is : "<<dend%dsor;
    return 0;

}
