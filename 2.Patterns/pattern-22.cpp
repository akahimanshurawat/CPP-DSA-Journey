// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// xxxx
// xxx
// xx
// x

#include<iostream>
using namespace std;
int main() {
    int i = 0, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<n) {
        int j = n - i;
        while (j>0) {
            cout<<"x";
            j--;
        }
        cout<<endl;
        i++;
    }
}