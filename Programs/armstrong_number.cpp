// Check whether the entered number is armstrong number or not
// like 153 is a armstrong number

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,num,r=0;
    cout<<"Enter the number  : ";
    cin>>n;
    num=n;
    int s=0;
    while(n>0){
        r=n%10;
        s+=pow(r,3);
        n=n/10;
    }
    if(s==num)
    cout<<num<<" is a armstrong number";
    else
    cout<<num<<" is not a armstrong number"<<num<<s;
    
    return 0;
}