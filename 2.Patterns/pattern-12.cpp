// INPUT:
// Enter the number of rows:4
//
// OUTPUT:
// AAAA
// BBBB
// CCCC
// DDDD

#include<iostream>
using namespace std;
int main() {
    int i = 1, n;
    char ch = 'A';
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        int j = 1;
        while (j<=n) {
            cout<<ch;
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
}