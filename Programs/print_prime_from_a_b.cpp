//WAP that will print the prime number between the range a and b.


#include<iostream>
using namespace std;
int main()
{
    int i,a,b,j;
    cout<<"Enter the range : ";
    cin>>a>>b;
    for(j=a;j<=b;j++)
    {
        int ct=0;
        for(i=1;i<=j;i++){
            if(j%i==0)
            ct++;
        }
        if(ct==2)
        cout<<j<<endl;
    }
    return 0;
}