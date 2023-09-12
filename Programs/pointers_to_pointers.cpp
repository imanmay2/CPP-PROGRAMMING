#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;
    int **q;
    **q=&p;
    cout<<*p<<endl;
    cout<<**q;
}