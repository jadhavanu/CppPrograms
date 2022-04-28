/*C++ Program to Find Size of int, float, double and char in Your System*/

#include <iostream>
using namespace std;

int main(){
    int n;
    double d;
    float f;
    char c;

    cout<<"\nThe size of integer is : "<<sizeof(n);
    cout<<"\nThe size of float is : "<<sizeof(f);
    cout<<"\nThe size of double is : "<<sizeof(d);
    cout<<"\nThe size of charachter is : "<<sizeof(c);

    return 0;
}
