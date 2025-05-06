#include<iostream>
using namespace std;
int ap(int a, int n, int d) {
    int solution = a + (n -1)*d;
    return solution;
}
int main() {
    int a, n, d;
    cout<<"Enter the first term:";
    cin>>a;
    cout<<"Enter the common difference:";
    cin>>d;
    cout<<"Enter the number of terms:";
    cin>>n;
    int ans = ap( a, n, d);
    cout<<"Nth term of the AP:"<<ans;
    return 0;
}