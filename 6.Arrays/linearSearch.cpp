#include<iostream>
using namespace std;
bool search(int arr[], int size, int key) {
   for (int i =0; i<size; i++) {
       if (arr[i]==key) {
           return 1;
       }
   }
    return 0;
}
int main() {
    int key;
    int arr[10] = {5,7,-2,10,1,0,22,-22,32,45};
    cout<<"Enter the key:";
    cin>>key;
    bool found = search(arr, 10, key);
    if (found)
        cout<<"is present";
    else
        cout<<"not present";
}