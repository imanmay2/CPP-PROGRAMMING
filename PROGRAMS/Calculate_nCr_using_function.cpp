//Write a function in c++ which will calculate the nCr of a given number from the user.
#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int j=1;j<=n;j++){
        f*=j;
    }
    return f;

}
int main()
{
    int n,i,r;
    cout<<"enter any value of n and r respectively";
    cin>>n>>r;
    cout<<"Calculation of nCr is "<<fact(n)/(fact(n-r)*fact(r));
    return 0;
}