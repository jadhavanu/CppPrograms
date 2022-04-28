/*50. Write a program in C++ to enter length in centimeter and convert it into meter and kilometer.
Sample Output:
Convert centimeter into meter and kilometer :
--------------------------------------------------
Input the distance in centimeter : 250000
The distance in meter is: 2500
The distance in kilometer is: 2.5
*/

#include <iostream>
using namespace std;

int main() {
    float cm,m,km;
    cout<<"\nConvert centimeter into meter and kilometer : ";
    cout<<"\n-------------------------------------------------";
    cout<<"\nInput the distance in centimeter : ";
    cin>>cm;
    m= cm / 100.0;
    km= cm / 100000.0;
    cout<<"\nThe distance in meter is : "<<m;
    cout<<"\nThe distance in kilometer is : "<<km;
    return 0;
}
