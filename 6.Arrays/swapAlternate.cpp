#include<iostream>
using namespace std;
void arraySwap(int arr[], int size) {
    int start = 0;
    int end = 1;
    while (end<size) {
        swap(arr[start],arr[end]);
        start+=2;
        end+=2;
    }
    cout<<"Reverse array is: ";
    for (int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int even[6] = {1,4,7,2,3,5};
    int odd[7] = {3,5,6,2,3,5,6};
    arraySwap(even, 6);
    arraySwap(odd, 7);
}