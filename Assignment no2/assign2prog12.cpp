//12)C++ Program to Generate Multiplication Table

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"\nInput the number to generate multiplication table : ";
    cin>>num;
    cout<<"\n multiplication table of "<<num<<" is :";

   for(int i=1;i<=10;i++)
         cout<<"\n"<<num<<" * " <<i<<" = "<<num*i  ;

    return 0;
}
