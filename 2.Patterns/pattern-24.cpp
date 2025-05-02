// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// 1111
//  222
//   33
//    4

#include<iostream>
using namespace std;
int main() {
    int i = 1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        int j = n - i;
        int k = 1;
        while (k<i) {
            cout<<" ";
            k++;
        }
        while (j>=0) {
            cout<<i;
            j--;
        }
        cout<<endl;
        i++;
    }
}