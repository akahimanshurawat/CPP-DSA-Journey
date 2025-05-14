#include<iostream>
using namespace std;
long long int squareroot(int n){
    int first = 1, last = n, ans = 0;
    while(first<=last){
        long long int mid = first + (last-first)/2;
        long long int square = mid*mid;
        if(square==n) {
            return mid;
        }
        else if (square>n)
            last = mid - 1;
        else {
            ans = mid;
            first = mid + 1;
        }
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i<precision;i++) {
        factor /= 10;
        for (double j = tempSol; j*j<n; j+=factor) {
            ans = j;
        }
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int tempSol = squareroot(n);
    cout<<"Answer is "<<morePrecision(n,3,tempSol);
}