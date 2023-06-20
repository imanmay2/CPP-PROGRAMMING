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
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"The factorial of the number is : "<<fact(num);
    return 0;
}