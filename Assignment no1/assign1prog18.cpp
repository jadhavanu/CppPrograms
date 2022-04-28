/*18. Write a program in C++ to find the area of any triangle using Heron's Formula.
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float s1,s2,s3;
    float area,s,s4;
    cout<<"\nFind the Area of any triangle using Heron's Formula : ";
    cout<<"\n--------------------------------------------------";
    cout<<"\nInput the length of 1st side of the triangle : ";
    cin>>s1;
    cout<<"\nInput the length of 2nd side of the triangle : ";
    cin>>s2;
    cout<<"\nInput the length of 3rd side of the triangle : ";
    cin>>s3;

    s=(s1+s2+s3)/2;
    //cout<<s<<endl;
    s4=s*(s-s1)*(s-s2)*(s-s3);
   // cout<<s4;
    area=sqrt(s4);
    cout<<"\nThe area of the triangle is : "<<area;

    return 0;
}
