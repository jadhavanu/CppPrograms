/*40. Write a program in C++ to print the area and perimeter of a rectangle.
Sample Output:
Print the area and perimeter of a rectangle:
----------------------------------------------
Input the width of the rectangle: 8.5
Input the height of the rectangle: 5.6
The area of the rectangle is: 47.6
The perimeter of the rectangle is: 28.2
*/

#include<iostream>
using namespace std;

int main(){
    float area, peri;
    float w,h;

    cout<<"\nPrint the area and perimeter of a rectangle : ";
    cout<<"\n---------------------------------------------";
    cout<<"\nInput the width of the rectangle : ";
    cin>>w;
    cout<<"\nInput the height of the rectangle : ";
    cin>>h;
    area=h*w;
    cout<<"\nThe area of the rectangle is : "<<area;
    peri=2*h+2*w;
    cout<<"\nThe perimeter of the rectangle is : "<<peri;
    return 0;
}
