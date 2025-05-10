#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    for (int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
void sortArray(int arr[], int size) {
    int i = 0, k = 0, j = size-1;
    while (i<=j) {
        if (arr[i]==0) {
            swap(arr[i],arr[k]);
            i++;
            k++;
        } else if (arr[i]==1) {
            i++;
        } else {
            swap(arr[i],arr[j]);
            j--;
        }
    }
}
int main() {
    int arr[7] = {1,2,0,1,2,1,2};
    sortArray(arr, 7);
    printArray(arr,7);
}