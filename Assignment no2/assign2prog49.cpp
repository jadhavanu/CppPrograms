//49)C++ Program to Swap Numbers in Cyclic Order Using Call by Reference
#include<iostream>
using namespace std;

void cyclicSwap(int *a, int *b, int *c);

int main()
{
    int a, b, c;

    cout << "\nEnter value of a, b and c respectively: ";
    cin >> a >> b >> c;

    cout << "\nValue before swapping: ";
    cout << "\na, b and c respectively are: " << a << ", " << b << ", " << c;

    cyclicSwap(&a, &b, &c);

    cout << "\nValue after swapping numbers in cycle: ";
    cout << "\na, b and c respectively are: " << a << ", " << b << ", " << c;

    return 0;
}

void cyclicSwap(int *a, int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
