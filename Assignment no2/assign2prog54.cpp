//54)C++ Program to Concatenate Two Strings

#include <iostream>
using namespace std;

int main() {
    string str1;
    string str2;
    int length=0;

    cout << "\nEnter 1st string: ";
    getline(cin, str1);
    cout << "\nEnter 1st string: ";
    getline(cin, str2);

    cout<<"\nAfter concatenation of two strings output string is : ";
    cout<<"\n"<<str1+str2;

    return 0;
}
