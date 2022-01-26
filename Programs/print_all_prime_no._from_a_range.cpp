#include<iostream>
using namespace std;
int pri(int n){
    int ct=0;
    for(int j=1;j<=n;j++){
        if(n%j==0){
            ct+=1;
        }
    }
    if(ct==2){
        return 1;
    }
}
int main()
{
    int a,b;
    cout<<"enter the starting and the ending value";
    cin>>a>>b;
    for( int i=a;i<=b;i++){
        if(pri(i)==1){
            cout<<i<<endl;
        }
    }
    return 0;
}