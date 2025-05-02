// INPUT:
// n = 4
//
// OUTPUT:
// ABCD
// ABCD
// ABCD
// ABCD

#include<iostream>
using namespace std;
int main() {
    int i = 1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        int j = 1;
        char ch = 'A';
        while (j<=n) {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}