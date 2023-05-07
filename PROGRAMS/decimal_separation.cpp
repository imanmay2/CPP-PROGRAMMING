//Write a program in c++ which will take a decimal/floating type number as input and just separate the int part and decimal part and print it.
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
    cout<<"Integer part of the floating number is "<<x<<endl;
    cout<<"Decimal number after separating is "<<deci;
    return 0;
}