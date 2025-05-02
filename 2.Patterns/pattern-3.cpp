/*
INPUT:4

OUTPUT:
1234
1234
1234
1234
 */

#include <iostream>
using namespace std;
int main() {
    int i = 1, j = 1, n;
    cout<<"Enter a number:";
    cin>>n;
    while (i<=n) {
        while (j<=n) {
            cout<<j;
            j++;
        }
        j = 1;
        cout<<endl;
        i++;
    }
}