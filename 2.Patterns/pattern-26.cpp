// INPUT:
// Enter the number of rows:5
//
// OUTPUT:
// 1234554321
// 1234xx4321
// 123xxxx321
// 12xxxxxx21
// 1xxxxxxxx1


#include<iostream>
using namespace std;
int main() {
    int i = 0, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<n) {
        int k = 1;
        while (k<=n-i) {
            cout<<k;
            k++;
        }
        int j = 0;
        while (j<i) {
            cout<<"x";
            j++;
        }
        int l = 0;
        while (l<i) {
            cout<<"x";
            l++;
        }
        int m = n-i;
        while (m>0) {
            cout<<m;
            m--;
        }
        cout<<endl;
        i++;
    }
}