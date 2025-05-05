#include<iostream>
using namespace std;
int main() {
    int amount, hundred, fifty, twenty, ten;
    cout<<"Enter the amount:";
    cin>>amount;
    while (amount>=10) {
        int noteType = 0;
        if (amount>=100)
            noteType = 1;
        else if (amount>=50)
            noteType = 2;
        else if (amount>=20)
            noteType = 3;
        else if (amount>=10)
            noteType = 4;
        switch (noteType) {
            case 1:
                hundred = amount/100;
                amount = amount%100;
                cout<<"No. of hundred ruppee notes: "<<hundred<<endl;
                break;
            case 2:
                fifty = amount/50;
                amount = amount%50;
                cout<<"No. of fifty ruppee notes: "<<fifty<<endl;
                break;
            case 3:
                twenty = amount/20;
                amount = amount%20;
                cout<<"No. of twenty ruppee notes: "<<twenty<<endl;
                break;
            case 4:
                ten = amount/10;
                amount = amount%10;
                cout<<"No. of twenty ruppee notes: "<<ten<<endl;
                break;
            default:
                cout<<"Enter a number above 10..";
        }
    }
    cout<<"Coin balance left: "<<amount;
}