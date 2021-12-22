///program to print the harmonic series 1+1/2+....1/n terms///
#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0,a=1;
    cout<<"Enter the range of the series";
    cin>>n;
    for(i=1;i<=n;i++){
        s=s+(a/i);
    }
    cout<<"The sum of the harmonic is as follows"<<s;
    return 0;
}