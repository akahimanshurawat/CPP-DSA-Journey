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
    int i = 1, j, n, count;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        j = 1;
        count = i;
        while (j<=i) {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}