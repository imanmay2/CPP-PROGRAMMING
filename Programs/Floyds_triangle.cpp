/*
Display the floyd's traiangle 
print the following pattern


1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15


*/


#include<iostream>
using namespace std;
int main()
{
    int k=0,n;
    cout<<"Enter the range : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            k++;
            cout<<k<<' ';
        }
        cout<<endl;
    }
    return 0;
}