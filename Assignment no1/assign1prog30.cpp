/*30. Write a program in C++ to compute the total and average of four numbers.
Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25
*/

#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3,n4,total;
    float avg;
    cout<<"\nCompute the total and average of four numbers : ";
    cout<<"\n-----------------------------------------------";
    cout<<"\nInput 1st two numbers (separated by space) : ";
    cin>>n1>>n2;
    cout<<"\nInput last two numbers (separated by space) : ";
    cin>>n3>>n4;
    total=n1+n2+n3+n4;
    cout<<"\nThe total of four numbers is : "<<total;
    avg=total/4;
    cout<<"\nThe average of four numbers is : "<<avg;
    return 0;
}
