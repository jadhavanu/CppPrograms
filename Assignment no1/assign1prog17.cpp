/*17. Write a program in C++ to find the Area and Perimeter of a Rectangle.
Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int l,w;
    float area,peri;
    cout<<"\nFind the Area and Perimeter of a Rectangle: ";
    cout<<"\n----------------------------------";
    cout<<"\nInput the length of the rectangle : ";
    cin>>l;
    cout<<"\nInput the width of the rectangle : ";
    cin>>w;
    area=l*w;
    peri=2*l+2*w;
    cout<<"\nThe area of the rectangle is : "<<area;
    cout<<"\nThe perimeter of the rectangle is : "<<peri;

    return 0;
}
