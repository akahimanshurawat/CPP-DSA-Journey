/*
Create a program to determine if the input value
is a number between 0 and 9, a lowercase letter 'a',
or an uppercase letter 'A'.
*/



#include<iostream>
using namespace std;
int main() {
    char ch;

    cout<<"Enter a character or a number: ";
    cin.get(ch);
    if (ch>=48 && ch<=57) {
        cout<<"This is a number";
    } else if (ch>=65 && ch<=90) {
        cout<<"This is an uppercase letter";
    } else if (ch>=97 && ch<=122) {
        cout<<"This is a lowercase letter";
    }
}