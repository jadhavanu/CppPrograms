/*57. Write a program in C++ to print the area of a hexagon.
Sample Output:
Print the area of a hexagon:
---------------------------------
Input the side of the hexagon: 6
The area of the hexagon is: 93.5307
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float side,area;
    cout<<"\nPrint the area of a hexagon :";
    cout<<"\n------------------------------";
    cout<<"\nInput the side of hexagon :";
    cin>>side;
    area=((3*sqrt(3))/2)*side*side;
    cout<<"\nThe area of the hexagon is: "<<area;
    return 0;
}
