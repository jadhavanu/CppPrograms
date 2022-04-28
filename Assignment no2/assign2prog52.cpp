//52)C++ Program to Remove all Characters in a String Except Alphabets.

#include <iostream>
using namespace std;

int main() {
    string str;
    string temp;

    cout << "\nEnter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.size(); ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            temp = temp + str[i];
        }
    }
    cout<<"\nInput string : "<<str;
    //str= temp;
    cout << "\nOutput String: " << temp;
    return 0;
}
