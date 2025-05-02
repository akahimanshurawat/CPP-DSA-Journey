// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// 1
// 21
// 321
// 4321

#include<iostream>
using namespace std;
int main() {
    int i = 1, j, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        j = i;
        while (j>0) {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}