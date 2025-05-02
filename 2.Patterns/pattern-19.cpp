// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// D
// CD
// BCD
// ABCD

#include<iostream>
using namespace std;
int main() {
    int i = 1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        int j = 1;
        char ch = 'A' + n - i;
        while (j<=i) {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}