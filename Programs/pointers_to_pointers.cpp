#include<iostream>
using namespace std;
int maim(){
    int a=10;
    int *p;
    p=&a;
    cout<<*p<<endl;
    int **q=&p;
    cout<<*q<<endl;
    cout<<**q;
    return 0;
}