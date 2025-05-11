#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
    int i = 0,j = size-1, m = 0;
    while (i<=j) {
        m = (i+j)/2;
        if (arr[m]==key) {
            return m;
        }else if (arr[m]>key) {
            j = m-1;
        } else{
            i = m+1;
        }
    }
    return -1;
}
int main() {
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};
    int index = binarySearch(even, 6, 12);
    int index2 = binarySearch(odd, 5,3);
    cout<<"index of 12 is "<<index<<endl;
    cout<<"index of 3 is "<<index2;
}