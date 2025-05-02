// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// 1
// 22
// 333
// 4444

#include<iostream>
using namespace std;
int main() {
    int i = 1, j, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        j = 1;
        while (j<=i) {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}