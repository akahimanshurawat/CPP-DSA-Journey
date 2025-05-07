#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    cout<<"Printing another array:"<<endl;
    for (int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}
int main() {
    int number[15]; //declare
    //printArray(number,15);

    int second[3] = {5, 7, 11};
    //printArray(second,3);

    int third[15] = {2, 7};
    //printArray(third,2);
    int thirdSize = sizeof(third)/sizeof(int);
    //cout<<"Size of third : "<<thirdSize<<endl;

    int fourth[10] = {0};
    //printArray(fourth,10);

    int fifth[10] = {1}; //not possible to intialize entire array with 1
    //printArray(fifth,10);
    int fifthSize = sizeof(fifth)/sizeof(int);
    //cout<<"Size of fifth : "<<fifthSize<<endl;

    char ch[5] = {'a','b','c','r','p'};
    for (int i =0; i<5; i++) {
        cout<<ch[i]<<" ";
    }
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];
}
