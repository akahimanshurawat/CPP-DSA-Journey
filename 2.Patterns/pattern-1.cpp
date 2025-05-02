/*
In this Patterns section, we’ll be working through 26 pattern problems,
starting from the very basics and gradually moving to a solid intermediate level.
These exercises will not only help you get more comfortable with C++ syntax,
but also sharpen your understanding of loops—especially while loops.

I encourage you to try solving each problem on your own first.
Struggle a little, think it through—that’s where the real learning happens.
And if you get stuck, no worries! You can always come back and check the solution.

Let’s build those logic muscles, one pattern at a time.

INPUT: 4

OUTPUT:
xxxx
xxxx
xxxx
xxxx

*/




#include<iostream>
using namespace std;
int main() {
    int i = 0, j = 0, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (i<n) {
        while (j<n) {
            cout<<"x";
            j++;
        }
        j = 0;
        cout<<endl;
        i++;
    }
}