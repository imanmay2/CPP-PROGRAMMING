///strong number is a number where the sum of the factorial is equal to the original number.///
#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter the number you want to enter";
    cin>>n;
    int x=n;
    while(n!=0)
    {
        int r=n%10;
        int i=1;
        int f=1;
        while(i<=r){
            f=f*i;
            i=i+1;
        }
        s=s+f;
        n=n/10;

    }
    if(s==x)
    {
        cout<<".........STORNG NUMBER......";
    }
    else{
        cout<<"..........NOT A STORNG NUMBER.....";
    }
    return 0;
}