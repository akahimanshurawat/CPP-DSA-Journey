#include<iostream>
using namespace std;
int main() {
    char ch = 'a';
    int num = 1;
    switch (ch) {
        case 1: cout<<"First"<<endl;
            break;
        case 'a': switch (num) {
            case 1: cout<<"The value of num is "<<num<<endl;
                break;
        }
            break;
        default:
            cout<<"It is a default case"<<endl;
    }
}