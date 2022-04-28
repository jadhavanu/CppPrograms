/*23. Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 25
The 25 Km./hr. means 15.5343 Miles/hr.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float km,mi;
    cout<<"\nConvert kilometers per hour to miles per hour : ";
    cout<<"\n--------------------------------------";
    cout<<"\nInput the distance in kilometer : ";
    cin>>km;
    mi=km * 0.62137;
    cout<<"\nThe "<<km<<" Km./hr. means "<<mi<<" Miles/hr";

    return 0;
}
