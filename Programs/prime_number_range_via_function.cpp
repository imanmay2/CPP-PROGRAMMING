// Print the prime number between the range of numbers.
#include<iostream>
using namespace std;
bool Prime(int n){
    int ct=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            ct++;
        }
    }
    if(ct==2){
        return true;
    }
    else 
    return false;
}
int main()
{
    int a,b,f=0;
    cout<<"Enter the starting range and the last range";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(Prime(i)){
            cout<<i<<endl;
            f=1;
        }
    }
    if(f==0)
    cout<<"No prime numbers ranging in that range";
    return 0;
}