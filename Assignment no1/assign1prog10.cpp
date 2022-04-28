/*10. Write a program in C++ to formatting the output.
Sample Output:
Formatting the output :
----------------------------
The value of pi : 3.1416
The value of pi 4 decimal place of total width 8 : | 3.1416|
The value of pi 4 decimal place of total width 10 : | 3.1416|
The value of pi 4 decimal place of total width 8 : |--3.1416|
The value of pi 4 decimal place of total width 10 : |----3.1416|
The value of pi in scientific format is : 3.1416e+00
Status in number : 0
Status in alphabet : false
*/
#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    float pi=3.1416;
    cout<<"Formatting the output : ";
    cout<<"\n-----------------------------------";
    cout<<"\nThe value of pi : "<<pi;
    cout<<"\nThe value of pi 4 decimal pace of total width 8 : |"<<setw(8)<<pi<<"|";
    cout<<"\nThe value of pi 4 decimal place of total width 10 : |"<<setw(10)<<pi<<"|";
    cout<<setfill('-');
    cout<<"\nThe value of pi 4 decimal place of total width 8 : |"<<setw(8)<<pi<<"|";
    cout<<"\nThe value of pi 4 decimal place of total width 10 : |"<<setw(10)<<pi<<"|";
    cout<<scientific;
    cout<<"\nThe value of pi in scientific format is : "<<pi;
    bool status=false;
    cout<<"\nStatus in number : "<<status;
    cout<<boolalpha;
    cout<<"\nStatus in alphabet : "<<status;

    return 0;
}

