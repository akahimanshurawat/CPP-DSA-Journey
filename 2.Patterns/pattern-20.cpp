// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// ABCD
// BCDE
// CDEF
// DEFG

#include<iostream>
using namespace std;
int main() {
    int i = 0, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<n) {
        char ch = 'A' + i;
        int j = 0;
        while (j<n) {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}