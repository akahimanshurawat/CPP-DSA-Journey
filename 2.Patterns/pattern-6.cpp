// INPUT:4
//
// OUTPUT:
// x
// xx
// xxx
// xxxx

#include<iostream>
using namespace std;
int main() {
    int i = 1, j, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        j = 1;
        while (j<=i) {
            cout<<"x";
            j++;
        }
        cout<<endl;
        i++;
    }
}