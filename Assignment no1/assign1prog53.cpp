/*53. Write a program in C++ to calculate area of an equilateral triangle.
Sample Output:
Calculate the area of the Equilateral Triangle :
----------------------------------------------------
Input the value of the side of the equilateral triangle: 5
The area of equilateral triangle is: 10.8253
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float side,area;
    cout<<"\nCalculate the area of the Equilateral Triangle : ";
    cout<<"\n-----------------------------------------------";
    cout<<"\nInput the value of the side of the equilateral triangle : ";
    cin>>side;
    area=(sqrt(3)/4)*side*side;
    cout<<"\nThe area of equilateral triangle is : "<<area;
    return 0;
}
