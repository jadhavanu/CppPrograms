/*51. Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 5
The 5 Km./hr. means 3.10686 Miles/hr.
*/

#include <iostream>
using namespace std;

int main() {

    float km,miles;
    cout<<"\nConvert kilometers per hour to miles per hour : ";
    cout<<"\n-----------------------------------------------";
    cout<<"\nInput the distance in kilometer : ";
    cin>>km;

    miles=km * 0.62137;
    cout<<"\nThe "<<km<<" Km./hr. means "<<miles<<" Miles/hr";
    return 0;
}

