/*
 INPUT:4

 OUTPUT:
1111
2222
3333
4444
 */

#include<iostream>
using namespace std;
int main() {
    int i = 1, j = 1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        while (j<=n) {
            cout<<i;
            j++;
        }
        j = 1;
        cout<<endl;
        i++;
    }
}