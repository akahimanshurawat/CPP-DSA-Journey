#include<iostream>
using namespace std;
int lastOccur(int arr[], int size, int key) {
    int start = 0, end = size - 1, mid = 0, count = -1;
    while (start <= end) {
        mid = start + (end - start)/2;
        if (arr[mid]==key) {
            count = mid;
            start = mid + 1;
        } else if (arr[mid]<key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return count;
}
int firstOccur(int arr[], int size, int key) {
    int start = 0, end = size - 1, mid = 0, count = -1;
    while (start<= end) {
        mid = start + (end - start)/2;
        if (arr[mid]==key) {
            count = mid;
            end = mid - 1;
        } else if (arr[mid]<key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return count;
}
int main() {
    int arr[7]= {1,2,2,2,2,3,4};
    int key = 2;
    int firstHalf = firstOccur(arr, 7, key);
    int secondHalf = lastOccur(arr, 7, key);
    if (firstHalf == -1 || secondHalf == -1)
        cout<<"Total times"<<key<< "is present in the array: 0";
    else
        cout<<"Total times 3 is present in the array: "<<secondHalf-firstHalf+1;
}