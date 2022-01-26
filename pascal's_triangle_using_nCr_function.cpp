#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int j=1;j<=n;j++){
        f*=j;
    }
    return f;

}
int main()
{
    int n;
    cout<<"Enter the range of the program";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}