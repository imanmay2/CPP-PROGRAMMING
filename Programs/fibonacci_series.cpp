// fibonacci series via function
// 0 1 1 2 3 5 8 .........
// print the above series via function


#include<iostream>
using namespace std;
int fibo(int n){
    int a=0,b=1,c=0;
    cout<<a<<endl<<b<<endl;
    for(int i=3;i<=n;i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cout<<"Enter the range of the series : ";
    cin>>n;
    fibo(n);
    return 0;
}