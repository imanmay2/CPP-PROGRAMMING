#include<iostream>
using namespace std;


class Complex{
    public:
    int real,imag;
    Complex(){}

    Complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }

    Complex operator +(const Complex &c1,const Complex &c2){
        Complex c3;
        c3.real=c1.real+c2.real;
        c3.imag=c1.imag+c2.imag;
        return c3;
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(10,10),c2(30,30),c3;
    c3=c1+c2;
    c3.display();
}