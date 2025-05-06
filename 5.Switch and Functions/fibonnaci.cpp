#include<iostream>
using namespace std;
void fibonacci(int n) {
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for (int i = 2; i<n; i++) {
        int nextNumber = a + b;
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;
    }
}
int main() {
    int n;
    cout<<"Enter a number:";
    cin>>n;
    fibonacci(n);
    return 0;
}