#include<iostream>
using namespace std;
int bit(int n) {
    int count = 0;
    while (n!=0) {
        int bits = n&1;
        if (bits) {
            count++;
        }
        n = n>>1;
    }
    return count;
}
int main() {
    int a, b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    int ans = bit (a) + bit (b);
    cout<<"Total number of SetBits:"<<ans;
    return 0;
}