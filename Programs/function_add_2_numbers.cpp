// Function to add 2 numbers

#include<iostream>
using namespace std;
int sum(int a,int b){
    int s=0;
    s=a+b;
    return s;
}
int main(){
    int n1,n2;
    cout<<"Enter the 2 numbers : ";
    cin>>n1>>n2;
    cout<<"Sum is : "<<sum(n1,n2);

}