//42)C++ Program to Find Largest Element of an Array

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n[15],s,i,temp;
    cout<<"\nProgram to Find Largest Element of an Array:";
    cout<<"\nEnter the size of array : ";
    cin>>s;
    cout<<"\nEnter the array elements : ";
    for(i=0;i<s;i++)
        cin>>n[i];
    cout<<"\nLargest Element of Array is : ";
        temp=n[0];
    for(i=1;i<s;i++)
        {
            if(temp<n[i])
                temp=n[i];
        }
    cout<<temp;

    return 0;
}
