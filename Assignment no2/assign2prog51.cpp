//51)C++ Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    char ch;
    int countv = 0,countc=0,countd=0,countw=0;
    int choice;
    cout<<"\nYou want to enter new string or use pre-initialized string in program : ";
    cout<<"\n 1. Enter new string\n2. Pre-initialized string in program\nyour choice : ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"\nEnter the string, string will end with white space or new line : ";
        getline(cin, str);

    }
    else if(choice==2)
    {
        str="1 Delhi is the capital city of India 2 Mumbai is economic capital of India";
    }
    else
    {
        cout<<"\nyou have entered wrong choice. Sorry";
        exit(0);
    }

    for (int i = 0; i < str.size(); i++)
    {
        if((str[i]=='a')||(str[i]=='A')||(str[i]=='e')||(str[i]=='E')||(str[i]=='i')||(str[i]=='I')||(str[i]=='o')||(str[i]=='O')||(str[i]=='u')||(str[i]=='U'))
        {
            ++ countv;
        }
        else if((str[i]=='0')||(str[i]=='1')||(str[i]=='2')||(str[i]=='3')||(str[i]=='4')||(str[i]=='5')||(str[i]=='6')||(str[i]=='7')||(str[i]=='8')||(str[i]=='9'))
        {
            ++countd;
        }
        else if(str[i]== ' ')
        {
            ++countw;
        }
        else
            ++countc;
    }
    cout<<"\nstring is : "<<str;
    cout << "\nNumber of Vowels in String are : " << countv;
    cout << "\nNumber of Consonants in String are : " << countc;
    cout << "\nNumber of Digits in String are : " << countd;
    cout << "\nNumber of White Spaces in String are : " << countw;

    return 0;
}
