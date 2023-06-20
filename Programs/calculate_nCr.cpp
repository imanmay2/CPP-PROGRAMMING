#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,r,nCr=0;
    cout<<"Enter the value of n and r : ";
    cin>>n>>r;
    nCr=fact(n)/(fact(r)* fact(n-r));
    cout<<"The nCr is : "<<nCr;
}