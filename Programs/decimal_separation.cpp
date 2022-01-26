#include<iostream>
using namespace std;
int main()
{
    float num,deci;
    int x;
    cout<<"Enter the number you want to enter";
    cin>>num;
    x=num/1;
    deci=num-x;
    cout<<"Integer part of the floating number is"<<x;
    cout<<"Decimal number after separating is"<<deci;
    return 0;
}