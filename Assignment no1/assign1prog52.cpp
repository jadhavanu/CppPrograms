/*52. Write a program in C++ to enter two angles of a triangle and find the third angle.
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 35
Input the 2nd angle of the triangle : 35
The 3rd of the triangle is : 110
*/

#include <iostream>
using namespace std;

int main() {

    int a1,a2,a3;
    cout<<"\nFind the third angle of a triangle : ";
    cout<<"\n------------------------------------";
    cout<<"\nInput the 1st angle of the triangle : ";
    cin>>a1;
    cout<<"\nInput the 2nd angle of the triangle : ";
    cin>>a2;
    a3=180-a1-a2;
    cout<<"\nThe 3rd angle of the triangle : "<<a3<<endl;
    return 0;
}
