#include<iostream>
using namespace std;
int main()
{
    int add,sub,pro,div,n1,n2;
    cout<<"Enter the two numbers: ";
    cin>>n1>>n2;
    add=n1+n2;
    sub=n1-n2;
    if(sub<(0))
    {
        sub=sub*(-1);
    }
    pro=n1*n2;
    div=n1/n2;
    cout<<"ADDITION,SUBSTRACTION,PRODUCT,DIVISION"<<" "<<add<<" "<<sub<<" "<<pro<<" "<<div<<" respectively";
    return 0;
}