//Write a program in c++ which will give the output like this
//1 
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
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