#include<iostream>
using namespace std;
int main() {
    int a = 3;
    cout<<a<<endl;

    if (true) {
        int a = 5;//variable declared inside if statement
        cout<<a<<endl;
    }
    cout<<a<<endl;
    for (int i = 1; i <= 8; i++) {
        cout<<"HI"<<endl;
    }
    if (1) {
        int b;
        if (1) {
            int b;
            if (1) {
                cout<<b<<endl;
            }
        }
    }
}