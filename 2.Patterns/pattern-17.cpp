// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// A
// BC
// DEF
// GHIJ

#include<iostream>
using namespace std;
int main() {
    int i = 1, n;
    char ch = 'A';
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        int j = 1;
        while (j<=i) {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}