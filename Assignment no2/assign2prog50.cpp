//50)C++ Program to Find the Frequency of Characters in a String

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    char ch;
    int count = 0;
    int choice;
    cout<<"\nYou want to enter new string or use pre-initialized string in program : ";
    cout<<"\n 1. Enter new string\n2. Pre-initialized string in program\nyour choice : ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"\nEnter the string, string will end with white space or new line : ";
        cin>>str;
    }
    else if(choice==2)
    {
        str="Delhi is the capital city of India";
    }
    else
    {
        cout<<"\nyou have entered wrong choice. Sorry";
        exit(0);
    }

    cout<<"\nEnter the character to check in string : ";
        cin>>ch;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  ch)
        {
            ++ count;
        }
    }
    cout<<"\nstring is : "<<str;
    cout << "\nNumber of " << ch << "in String "<<" is : " << count;

    return 0;
}
