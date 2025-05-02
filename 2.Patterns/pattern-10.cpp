// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// 1
// 23
// 345
// 4567

#include<iostream>
using namespace std;
int main() {
    int i = 1, j = 1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        j = 0;
        while (j<i) {
            cout<<j+i;
            j++;
        }
        cout<<endl;
        i++;
    }
}