/*
Develop a program to determine if a user-entered number is prime or not.
 */

#include <iostream>
using namespace std;
int main() {
    int n, i = 2, count = 0;
    cout<<"Enter the number: ";
    cin>>n;
    while (i<n) {
        if (n%i==0) {
            count++;
        }
        i++;
    }
    if (count>0) {
        cout<<n<<" is not a prime number."<<endl;
    } else {
        cout<<n<<" is a prime number."<<endl;
    }
}