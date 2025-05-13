#include<iostream>
using namespace std;
int getPivot(int arr[], int size) {
    int s = 0, e = size-1;
    while (s<e) {
        int mid = s + (e-s)/2;
        if (arr[mid]>=arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}
int main() {
    int arr[6] = {7,8,9,2,3,4};
    int pivot = getPivot(arr, 6);
    cout<<"Pivot: "<<arr[pivot];
}