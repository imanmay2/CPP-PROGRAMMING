#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of rows you want to enter";
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;

    }
    return 0;

}