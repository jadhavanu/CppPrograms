/*46. Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 4
Input the height of the cylinder : 8
The volume of a cylinder is : 401.92
*/

#include <iostream>
using namespace std;

int main() {

    float rad,hgt,vol;
    cout<<"\nCalculate the volume of a cylinder : ";
    cout<<"\n-------------------------------------";
    cout<<"\nInput the radius of the cylinder : ";
    cin>>rad;
    cout<<"\nInput the height of the cylinder : ";
    cin>>hgt;
    vol= 3.14*rad*rad*hgt;
    cout<<"\nThe volume of a cylinder is : "<<vol<<endl;

    return 0;
}

