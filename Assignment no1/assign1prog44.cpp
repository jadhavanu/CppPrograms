/*44. Write a language program to get the volume of a sphere with radius 6.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 5
The volume of a sphere is : 523.333
*/

#include <iostream>
using namespace std;

int main(){
    float r, vol;

    cout<<"\nCalculate the volume of a sphere : ";
    cout<<"\n-----------------------------------";
    cout<<"\nInput the radius of a sphere : ";
    cin>>r;
    vol=(4*3.14*r*r*r)/3;
    cout<<"\nThe volume of a sphere is : "<<vol;
    return 0;

}
