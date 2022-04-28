/*13. Write a program in C++ to swap two numbers.
Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25
*/

#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"\n Swap two numbers : ";
    cout<<"\n----------------------";
    cout<<"\n Enter 1st number : ";
    cin>>n1;
    cout<<"\n Enter 2nd number : ";
    cin>>n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<"\nAfter swapping the 1st number is : "<<n1;
    cout<<"\nAfter swapping the 2nd number is : "<<n2;

    return 0;

}
