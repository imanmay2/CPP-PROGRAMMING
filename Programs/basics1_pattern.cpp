#include<iostream>
using namespace std;
int main()
{
    int k=1,i,j,n;
    cout<<"enter the number of rows";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<k<<" ";
            k=k+1;
        }
        cout<<endl;
    }
    return 0;
}