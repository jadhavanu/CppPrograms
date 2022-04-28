/*20. Write a program in C++ to convert temperature in Celsius to Fahrenheit.
Sample Output:
Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float f,c;
    cout<<"\nConvert temperature in Celsius to Fahrenheit : ";
    cout<<"\n--------------------------------------------------";
    cout<<"\nInput the temperature in Celsius : ";
    cin>>c;
    f=c*1.8+32;
    cout<<"\nThe temperature in Celsius : "<<c;
    cout<<"\nThe temperature in Fahrenheit : "<<f;

    return 0;
}
