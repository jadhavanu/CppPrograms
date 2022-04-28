/*54. Write a program in C++ to enter P, T, R and calculate Simple Interest.
Sample Output:
Calculate the Simple Interest :
-----------------------------------
Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float p,t,r,si;
    cout<<"\nCalculate the Simple Interest : ";
    cout<<"\n-------------------------------";
    cout<<"\nInput the Principle : ";
    cin>>p;
    cout<<"\nInput the Rate of Interest : ";
    cin>>r;
    cout<<"\nInput the Time : ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"\nThe Simple interest for the amount "<<p<<" for "<<t<<" years "<<"@ "<<r<<" % is : "<<si;
    return 0;

}
