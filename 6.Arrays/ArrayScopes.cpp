#include<iostream>
using namespace std;
void update(int arr[],int n) {
    cout<<"Inside the Function"<<endl;
    arr[0] = 120; //updating arrays first element;
    for (int i = 0; i<3; i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;
    cout<<"Going back to the function"<<endl;
}
int main() {
    int arr[3] = {1,2,3};
    update(arr, 3);

    for (int i = 0; i<3; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}