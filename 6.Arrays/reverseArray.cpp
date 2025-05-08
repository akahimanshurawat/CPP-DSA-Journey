#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    cout<<"Array: ";
    for (int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[], int size) {
    int start = 0;
    int end = size-1;
    while (start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"Reverse of array: ";
    for (int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[100], size;
    cout<<"Enter the size of array:";
    cin>>size;
    for (int i = 0; i<size; i++) {
        cout<<"Enter the number:";
        cin>>arr[i];
    }
    printArray(arr, size);
    reverse(arr, size);
}