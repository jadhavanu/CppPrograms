/*26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300
*/

#include<iostream>
using namespace std;

int main(){
    float kel,fah;
    cout<<"\nConvert temperature in Fahrenheit to Kelvin : ";
    cout<<"\n----------------------------------------------";
    cout<<"\nInput the temperature in Fahrenheit : ";
    cin>>fah;
    cout<<"\nThe temperature in Fahrenheit : "<<fah;
    kel=((fah-32)*5)/9+273.15;
    cout<<"\nThe tempareture in Kelvin : "<<kel;
    return 0;

}
