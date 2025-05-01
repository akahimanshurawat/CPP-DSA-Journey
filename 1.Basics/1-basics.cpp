/*
Hello everyone, welcome to my DSA journey!
This is our first program.
The user will input a number, and we need to
print the sum of all even numbers between 1 and that number.

INPUT:
n = 11;

OUTPUT:
Sum of the even numbers:30
*/


#include<iostream>
using namespace std;
int main() {
    int i = 1, sum = 0, n;
    cout<<"Enter a number:";
    cin>>n;
    while (i<=n) {
        if (i%2==0) {
            sum += i;
        }
        i++;
    }
    cout<<"Sum of even numbers:"<<sum<<endl;
}