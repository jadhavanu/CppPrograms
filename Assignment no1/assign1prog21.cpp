/*21. Write a program in C++ to convert temperature in Fahrenheit to Celsius.
Sample Output:
Convert temperature in Fahrenheit to Celsius :
---------------------------------------------------
Input the temperature in Fahrenheit : 95
The temperature in Fahrenheit : 95
The temperature in Celsius : 35
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float f,c;
    cout<<"\nConvert temperature in Fahrenheit to Celsius : ";
    cout<<"\n--------------------------------------------------";
    cout<<"\nInput the temperature in Fahrenheit : ";
    cin>>f;
    c=(f-32)*5/9;
    cout<<"\nThe temperature in Fahrenheit : "<<f;
    cout<<"\nThe temperature in Celsius : "<<c;
    return 0;
}
