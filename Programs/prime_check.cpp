#include<iostream>
using namespace std;
int main()
{
    int n,ct=0;
    cout<<"Enter a number";
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
            ct++;
        }
    }
    if(ct==0)
    cout<<"Prime Number";
    else
    cout<<"Non Prime number";
}