#include<iostream>
using namespace std;
int sum(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i<size; i++) {
        ans = ans + arr[i];
    }
    return ans;
}
int main() {
    int size, arr[20];
    cout<<"Enter the size of the array:";
    cin>>size;
    for (int i = 0; i<size; i++) {
        cout<<"Enter the number:";
        cin>>arr[i];
    }
    int ans = sum(arr, size);
    cout<<"Sum of the array:"<<ans;
}