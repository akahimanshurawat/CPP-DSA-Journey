// code 360:  Search In Rotated Sorted Array

int getPivot(vector<int>& arr, int size) {
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
int binarySearch(vector<int>& arr, int s, int e,int key) {
    int i = s,j = e, m = 0;
    while (i<=j) {
        m = i + (j-i)/2;
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
int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1])
        return binarySearch(arr,pivot,n-1,k);
    else
        return binarySearch(arr,0,pivot-1,k);
}
