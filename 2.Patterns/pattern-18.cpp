// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// A
// BC
// CDE
// DEFG

#include<iostream>
using namespace std;
int main() {
    int i = 0, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<n) {
        int j = 0;
        char ch = 'A' + i;
        while (j<=i) {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}