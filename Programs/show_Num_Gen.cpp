//Write a program that will print the numbers using class Templates.

#include<iostream>
using namespace std;

template<class T>
class Number{
    T num;

    public:
    Number(T n):num(n){}

    T displayNum(){
        return num;
    }
};



int main(){
    Number<int> n1(12);
    Number<double> n2(12.2);

    cout<<n1.displayNum()<<endl;
    cout<<n2.displayNum()<<endl;
}