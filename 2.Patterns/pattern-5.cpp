/*
INPUT:3

OUTPUT:
123
456
789

 */


#include<iostream>
using namespace std;
int main() {
    int i = 1, j = 1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<=n) {
        while (j<=n*i) {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}