//Write a program that will print the inverted pyramid like this.
//****
//*** 
//**  
//*   
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the rows of the pattern";
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}