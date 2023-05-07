//write a program in c++ which will add two numbers using function
#include<iostream>
using namespace std;

int add(int n,int q){
    int sum=n+q;
    return sum;
}
int main()
{
    int a,b;
    cout<<"Enter any two numbers you want to enter";
    cin>>a>>b;
    cout<<"Sum of two numbers is "<<add(a,b)<<endl;
    return 0;
}