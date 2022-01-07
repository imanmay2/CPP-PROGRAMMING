#include<iostream>
using namespace std;
int main()
{
    int x,y,i,j;
    int s1=0,s2=0;
    cout<<"Enter the numbers you want to enter";
    cin>>x>>y;
    for(i=1;i<x;i++){
        if(x%i==0){
            s1=s1+i;
        }
    }
    for(j=1;j<y;j++){
        if (y%j==0)
        {
            s2=s2+j;
        }
        
    }
    if(s1==y && s2==x){
        cout<<"............AMICABLE NUMBER...........";
    }
    else{
        cout<<"..........Not a Amicable number";
    }
}