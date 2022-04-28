/*24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33
*/
#include<iostream>
using namespace std;

int main(){

    float kel, fah;
    cout<<"\nConvert temperature in Kelvin to Fahrenheit : ";
    cout<<"\n----------------------------------------------";
    cout<<"\nInput the temperature in Kelvin : ";
    cin>>kel;
    fah=((kel-273.15)*9)/5+32;
    cout<<"\nThe temperature in Kelvin : "<<kel;;
    cout<<"\nThe temperature in Fahrenheit : "<<fah;
return 0;

}
