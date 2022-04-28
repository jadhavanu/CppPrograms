/*31. Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows.
Sample Output:
Make a rectangular shape by a single digit number :
--------------------------------------------------------
Input the number : 5
5555
5 5
5 5
5 5
5 5
5555
*/

#include<iostream>
using namespace std;

int main(){
    int n,r=6,c=4;
    cout<<"\nMake a rectangular shape by a single digit number : ";
    cout<<"\n---------------------------------------------------";
    cout<<"\nInput the number : ";
    cin>>n;
    cout<<"\n"<<n<<n<<n<<n;
    cout<<"\n"<<n<<" "<<" "<<n;
    cout<<"\n"<<n<<" "<<" "<<n;
    cout<<"\n"<<n<<" "<<" "<<n;
    cout<<"\n"<<n<<" "<<" "<<n;
    cout<<"\n"<<n<<n<<n<<n;
    return 0;
}
