//C++ Program to Calculate Sum of Natural Numbers

#include<iostream>
using namespace std;

int main(){

int  i,sum=0;

cout<<"\nThe sum of Natural Numbers from 1 to 100 is : ";

for(i=1;i<=100;i++)
sum=sum+i;

cout<<sum;
return 0;
}
