// INPUT:
// Enter the number of rows:3
//
// OUTPUT:
// 1
// 23
// 456


#include<iostream>
using namespace std;
int main() {
    int i = 1, j, n, count = 1;
    cout<<"Enter the number of rows:";;
    cin>>n;
    while (i<=n) {
        j = 1;
        while (j<=i) {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}