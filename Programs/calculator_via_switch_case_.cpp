// WAP that will make a calculator (+-*/) via switch case


#include<iostream>
using namespace std;
int main()
{
    char ch;
    int a,b;
    cout<<"Enter the 2 numbers for performing the operation: ";
    cin>>a>>b;
    cout<<"Enter the symbol(+-*/)";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<"Sum is "<<a+b;
        break;
    case '-':
        cout<<"Differnce is "<<a-b;
        break;
    case '*':
        cout<<"Multiplication  is "<<a*b;
        break;
    case '/':
        cout<<"Division is "<<a/b;
        break;
    default:
        cout<<"Wrong Input!!!!";
        break;
    }
}