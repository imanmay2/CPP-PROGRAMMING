#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"PLEASE ENTER A NUMBER :";
    cin>>n;
    if(n<0)
    cout<<n<<" is negative";
    else if(n>0)
    cout<<n<<" is positive";
    return 0;
}