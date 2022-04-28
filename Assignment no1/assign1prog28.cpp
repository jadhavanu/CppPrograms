/*28. Write a program in C++ to find the area of Scalene Triangle.
Sample Output:
Find the area of Scalene Triangle :
----------------------------------------
Input the length of a side of the triangle : 5
Input the length of another side of the triangle : 6
Input the angle between these sides of the triangle : 6
The area of the Scalene Triangle is : 1.56793
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float s1, s2, ang,area, pi=3.14;
    cout<<"\nFind the area of Scalene Triangle : ";
    cout<<"\n------------------------------------";
    cout<<"\nInput the length of a side of the triangle : ";
    cin>>s1;
    cout<<"\nInput the length of a another side of the triangle : ";
    cin>>s2;
    cout<<"\nInput the angle between these sides of the triangle : ";
    cin>>ang;
    area=((s1*s2)*sin((pi/180)*ang))/2;
    cout<<"\nThe area of the Scalene Triangle is : "<<area;
    return 0;

}
