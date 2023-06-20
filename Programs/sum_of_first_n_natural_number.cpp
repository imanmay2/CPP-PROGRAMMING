// sum of first n natural numbers

#include<iostream>
using namespace std;
int main()
{
    int s=0,n;
    cout<<"Enter the range : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+i;
    }
    cout<<"Sum of first n natural numbers is : "<<s;
    return 0;
}