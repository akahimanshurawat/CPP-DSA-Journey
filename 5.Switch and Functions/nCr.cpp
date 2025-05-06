#include<iostream>
using namespace std;
int factorial(int n) {
    int nFactorial = 1;
    for (int i=1; i<=n; i++) {
        nFactorial = nFactorial*i;
    }
    return nFactorial;
}
int nCr(int n, int r) {
    int numerator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);
    int ans = numerator/denominator;
    return ans;
}
int main() {
    int n, r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;
    int answer = nCr(n,r);
    cout<<"Value of nCr: "<<answer;
}