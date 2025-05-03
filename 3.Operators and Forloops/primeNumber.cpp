#include<iostream>
using namespace std;
int main() {
    int n, count = 0;
    cout<<"Enter the number:";
    cin>>n;
    for (int i = 2; i < n; i++) {
      if (n%i == 0) {
          cout<<"Not a prime number";
          count++;
          break;
      }
    }
    if (count == 0) {
        cout<<"Prime number";
    }
}