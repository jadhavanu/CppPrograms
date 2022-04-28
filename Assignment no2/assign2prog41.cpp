//41)C++ Program to Calculate Average of Numbers Using Arrays

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n[15],s,i,sum=0,avg;
    cout<<"\nProgram to Find Average of Numbers Using Arrays:";
    cout<<"\nEnter the size of array : ";
    cin>>s;
    cout<<"\nEnter the array elements : ";
    for(i=0;i<s;i++)
        cin>>n[i];
    cout<<"\nAverage of Numbers is : ";
    for(i=0;i<s;i++)
        sum=sum+n[i];
    avg=sum/s;
    cout<<avg;

    return 0;
}
