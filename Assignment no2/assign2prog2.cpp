/*C++ Program to Find Quotient and Remainder*/

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"\nInput the dividend : ";
    cin>>n1;
    cout<<"\nInput the divisor : ";
    cin>>n2;
    cout<<"\nAfter dividing "<<n1<<" by "<<n2<<" the Quotient is : "<<n1/n2;
    cout<<"\nAfter dividing "<<n1<<" by "<<n2<<" the Remainder is : "<<n1%n2;
    return 0;
}
