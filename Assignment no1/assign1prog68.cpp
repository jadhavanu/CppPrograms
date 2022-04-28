/*68. Write a C++ program to read seven numbers and sorts them in descending order.   */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int num[7],temp;
    cout<<"\nInput 7 number to sort : ";
    for (int i=0;i<7;i++)
        cin>>num[i];
    for(int j=0;j<7;j++)
        for(int k=j+1;k<7;k++)
    {

        if (num[j]<num[k])
        {
            temp=num[j];
            num[j]=num[k];
            num[k]=temp;
        }
    }
    cout<<"\nAfter sorting numbers in descending order : ";
    for (int l=0;l<7;l++)
        cout<<num[l]<<"\t";

    return 0;

}
