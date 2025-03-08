#include<iostream>
using namespace std;
void swap(int &x,int &y){
    x=x+y;
    y=x-y;
    x=x-y;
}
int main(){
    int a,b;
    cout<<"Enter A and B : "<<endl;
    cin>>a>>b;
    cout<<"Value before swapped is : "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"Value before swapped is : "<<a<<" "<<b<<endl;
    
}
