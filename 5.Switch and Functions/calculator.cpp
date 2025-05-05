#include<iostream>
using namespace std;
int main() {
    int firstNum, secondNum, operation;
    cout<<"Enter the first number:";
    cin>>firstNum;
    cout<<"Enter the second number:";
    cin>>secondNum;
    cout<<"Choose from the below mentioned operations:"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Remainder"<<endl;
    cout<<"Your choice:";
    cin>>operation;
    switch (operation) {
        case 1:
            cout<<"The sum of the numbers is: "<<firstNum + secondNum;
            break;
        case 2:
            cout<<"The substraction of the numbers is: "<<firstNum - secondNum;
            break;
        case 3:
            cout<<"The multiplication of the numbers is: "<<firstNum * secondNum;
            break;
        case 4:
            cout<<"The division of the numbers is: "<<firstNum / secondNum;
            break;
        case 5:
            cout<<"The remainder on dividing the numbers is: "<<firstNum % secondNum;
            break;
        default:
            cout<<"Invalid choice...";
    }
}