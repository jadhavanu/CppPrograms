/*16. Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int r,h;
    float vol;
    cout<<"\nCalculate the volume of a cylinder : ";
    cout<<"\n----------------------------------";
    cout<<"\nInput the redius of the cylinder : ";
    cin>>r;
    cout<<"\n Input the height of the cylinder : ";
    cin>>h;
    vol=3.14*r*r*h;
    cout<<"\nThe volume of a cylinder is : "<<vol;

    return 0;
}
