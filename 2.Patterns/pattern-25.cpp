// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
//    1
//   121
//  12321
// 1234321

#include<iostream>
using namespace std;
int main() {
    int i = 1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        int k = n - i;
        int j = 1;
        int l = i - 1;
        while (k>0) {
            cout<<" ";
            k--;
        }
        while (j<=i) {
            cout<<j;
            j++;
        }
        while (l>0) {
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;
    }
}