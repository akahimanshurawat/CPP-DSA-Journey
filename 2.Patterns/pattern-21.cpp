// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
//    x
//   xx
//  xxx
// xxxx

#include<iostream>
using namespace std;
int main() {
    int i = 1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        char ch = 'x';
        int j = n - i;
        int k = 1;
        while (j>0) {
            cout<<" ";
            j--;
        }
        while (k<=i) {
            cout<<"x";
            k++;
        }
        cout<<endl;
        i++;
    }
}