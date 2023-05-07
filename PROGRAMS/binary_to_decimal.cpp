#include<iostream>
using namespace std;
int binarytodecimal(int n){
    int ans=0;
    int x=1;
    while(n!=0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<"The binary to decimal conversion is as follows"<<binarytodecimal(n);
    return 0;
}