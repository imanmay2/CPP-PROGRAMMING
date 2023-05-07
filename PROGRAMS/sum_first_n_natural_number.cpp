//print the sum of all first n natural numbers entered by the users.
#include<iostream>
using namespace std;
float sum(int n){
    int s=(n*(n+1))/2;
    return s;
}
int main()
{
    int n;
    cout<<"Enter the last number";
    cin>>n;
    cout<<"The sum of the first"<<n<<"natural numbers is"<<sum(n);
    return 0;
}