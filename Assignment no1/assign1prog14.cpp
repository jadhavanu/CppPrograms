/*14. Write a program in C++ to calculate the volume of a sphere.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int r;
    float vol;
    cout<<"\nCalculate the volume of a sphere : ";
    cout<<"\n----------------------------------";
    cout<<"\nInput the radius of a sphere : ";
    cin>>r;
    vol= 4*3.14*(r*r*r)/3;
    cout<<"\nThe volume of a sphere is : "<<vol;

    return 0;
}
