#include<iostream>
using namespace std;
int lastOccur(int arr[], int size, int key) {
    int start = 0, end = size - 1, m = 0, ans = -1;
    while (start<=end) {
        m = start + (end - start)/2;
        if (arr[m]==key) {
            ans = m;
            start = m + 1;
        } else if (arr[m]<key) {
            start = m + 1;
        } else {
            end = m - 1;
        }
    }
    return ans;
}
int firstOccur(int arr[], int size, int key) {
    int start = 0, end = size-1;
    int m = 0;
    int ans = -1;
    while (start<=end) {
        m = start + (end-start)/2;
        if (arr[m]==key) {
           ans = m;
            end = m - 1;
        } else if (arr[m]<key) {
            start = m + 1;
        } else if (arr[m]>key) {
            end = m - 1;
        }
    }
    return ans;
}
int main() {
    int arr[7] = {1,2,2,3,4,5,6};
    int firstIndex = firstOccur(arr, 7, 3);
    int lastIndex = lastOccur(arr, 7, 3);
    cout<<firstIndex<<" "<<lastIndex;
}