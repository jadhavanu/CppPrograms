
/*9. Write a program in C++ to display the operation of pre and post increment and decrement.
Sample Output:
Display the operation of pre and post increment and decrement :
--------------------------------------------------------------------
The number is : 57
After post increment by 1 the number is : 58
After pre increment by 1 the number is : 59
After increasing by 1 the number is : 60
After post decrement by 1 the number is : 59
After pre decrement by 1 the number is : 58
After decreasing by 1 the number is : 57
*/
#include <iostream>
using namespace std;


int main(){
    int n=57;
    cout<<"Display the operation of pre and post increment and decrement :\n";
    cout<<"-------------------------------------------------------------------\n";
    cout<<"The number is : "<<n;
    n=n+1;
    cout<<"\nAfter post increment by 1; the number is : "<<n;
    n=++n;
    cout<<"\nAfter pre increment by 1 the number is : "<<n;
    n=n+1;
    cout<<"\nAfter increment by 1 the number is : "<<n;
    n=n-1;
    cout<<"\nAfter post decrement by 1 the number is : "<<n;
    n=--n;
    cout<<"\nAfter  pre decrement by 1 the number is  : "<<n;
    n=n-1;;
    cout<<"\nAfter decrement by 1 the number is : "<<n;

    return 0;
}
