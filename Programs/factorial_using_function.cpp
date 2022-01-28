//Write a program in c++ which will calculate the factorial by using function.
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
    int n,i;
    cout<<"enter any number you want";
    cin>>n;
    cout<<"Factorial of the number is "<<fact(n);
    return 0;
}