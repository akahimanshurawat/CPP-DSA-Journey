/*
Develop a program to convert temperatures
from Fahrenheit to Celsius. When a user inputs
a number, such as 10, the program should display
the Celsius conversions for Fahrenheit values
from 1 to 10. Use the formula: C = (F - 32) * 5/9.
*/


#include<iostream>
using namespace std;
int main() {
    double temp, i = 1, n;
    cout<<"Enter a number:";
    cin>>n;
    while (i<=n) {
        temp = (i-32)*5/9;
        cout<<i<<" degree in fahrenheit is "<<temp<<" degree in celcius"<<endl;
        i++;
    }
}