/*45. Write a program in C++ to calculate the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125
*/

#include <iostream>
using namespace std;

int main() {

    float side,vol;
    cout<<"\nCalculate the volume of a cube : ";
    cout<<"\n-----------------------------------";
    cout<<"\nInput the side of a cube : ";
    cin>>side;
    vol = side*side*side;
    cout<<"\nThe volume of a cube is : "<<vol<<endl;
    return 0;
}
