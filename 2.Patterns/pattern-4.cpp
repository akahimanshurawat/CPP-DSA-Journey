/*
INPUT: 4

OUTPUT:
4321
4321
4321
4321
 */

#include <iostream>
using namespace std;
int main() {
    int i = 1, j = 1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        j = n;
        while (j>=1) {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}