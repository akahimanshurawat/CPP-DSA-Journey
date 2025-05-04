#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int binary = 0;
    int i = 0;
    while (n != 0) {
            int bit = n % 2;
            binary += bit * pow(10, i);
            n = n / 2;
            i++;
    }
    cout<<"Binary number is: "<<binary;
}
