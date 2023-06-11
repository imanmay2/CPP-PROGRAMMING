// WAP that will take 3 numbers from the user and display the maximum from them.


#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter 3 numbers  :  \n";
    cin>>num1>>num2>>num3;
    if(num1>num2 and num1>num3)
    cout<<num1<<" is the maximum";
    else if(num2>num3)
    cout<<num2<<" is the maximum ";
    else
    cout<<num3<<" is the maximum";
    return 0;
}