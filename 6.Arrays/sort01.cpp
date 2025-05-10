#include<iostream>
using namespace std;
void sortArray(int arr[], int size) {
    int i = 0, j = size-1;
    while (i<=j) {
        if (arr[i]==0) {
            i++;
        } else {
            swap(arr[i],arr[j]);
            j--;
        }
    }
}
void printArray( int arr[], int size) {
    for (int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[5] = {1,0,1,0,1};
    sortArray(arr, 5);
    printArray(arr, 5);
}