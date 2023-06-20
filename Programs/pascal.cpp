// print the following pascal triangle using factorial concept
/*
1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/

#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    cout<<"Enter the range of the pattern : ";
    cin>>n;
    for (int  i = 0; i <n; i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;

    }
    
}