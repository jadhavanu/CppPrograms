/*58. Write a program in C++ to print the area of a polygon.
Sample Output:
Print the area of a polygon:
---------------------------------
Input the number of sides of the polygon: 7
Input the length of each side of the polygon: 6
The area of the polygon is: 130.821
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int nsides;
    float len,area;

    cout<<"\nPrint the area of a polygon : ";
    cout<<"\n----------------------------";
    cout<<"\nInput the number of sides of the polygon : ";
    cin>>nsides;
    cout<<"\nInput the length of each side of the polygon : ";
    cin>>len;
    area= (nsides * (len * len)) / (4.0 * tan((M_PI / nsides)));
    cout<<"\nThe area of the polygon is : "<<area;
    return 0;
}
