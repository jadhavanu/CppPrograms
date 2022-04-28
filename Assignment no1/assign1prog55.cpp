/*55. Write a program in C++ to enter P, T, R and calculate Compound Interest.
Sample Output:
Calculate the Compound Interest :
------------------------------------- Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Interest after compounded for the amount 20000 for 1.5 years @ 10
% is: 3073.8 The total amount after compounded for the amount 20000 for 1.5 years @
10 % is: 23073.8
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float p,t,r,ci,amt;
    cout<<"\nCalculate the Simple Interest : ";
    cout<<"\n-------------------------------";
    cout<<"\nInput the Principle : ";
    cin>>p;
    cout<<"\nInput the Rate of Interest : ";
    cin>>r;
    cout<<"\nInput the Time : ";
    cin>>t;

    amt=p*pow((1+(r/100)),t);
    ci=amt-p;
    cout<<"\nThe Interest after compounded for the amount "<<p<<" for "<< t<<" years @ "<<r<<" % is: "<<ci;
    cout<<"\nThe total amount after compounded for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<amt;

    return 0;

}
