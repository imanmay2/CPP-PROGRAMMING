// WAP THAT WILL SWAP TWO VARIABLES.


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the variables : ";
    cin>>a>>b;
    cout<<"Variables you have entered : "<<a<<" " <<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Varibales you have entered  : "<<a<<" "<<b<<endl;
    return 0;
}