#include<iostream>
using namespace std;
int getMax(int num[], int n) {
    int max = INT_MIN;
    //int maxi = INT_MIN;
    //maxi = max(maxi, num[i]);
    for (int i = 0; i<n ; i++) {
        if (num[i]>max) {
            max = num[i];
        }
    }
    return max;
}
int getMin(int num[], int n) {
    int min = INT_MAX;
    //int mini = INT_MAX;
    for (int i = 0; i<n; i++) {
        //mini = min(mini, num[i])
        if (num[i]<min) {
            min = num[i];
        }
    }
    return min;
}
int main() {
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int num[100];

    for (int i = 0; i<size; i++) {
        cout<<"Enter a number:";
        cin>>num[i];
    }
    int max = getMax(num, size);
    int min = getMin(num, size);
    cout<<"Maximum number in array is:"<<max<<endl;
    cout<<"Minimum number in array is:"<<min;
}