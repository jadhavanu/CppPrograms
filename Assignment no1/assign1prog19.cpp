/*19. Write a program in C++ to find the area and circumference of a circle.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float r;
    float area,c;
    cout<<"\nFind the area and circumference of any circle : ";
    cout<<"\n--------------------------------------------------";
    cout<<"\nInput the radius(1/2 of diameter) of a circle : ";
    cin>>r;
    area=3.14159*r*r;
    c=2*3.14159*r;
    cout<<"\nThe area of the circle is : "<<area;
    cout<<"\nThe circumference of the circle is : "<<c;

    return 0;
}
