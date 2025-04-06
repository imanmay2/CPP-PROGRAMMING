#include<iostream>
using namespace std;


class Complex{
    private:
    int real,imag;

    public:
    Complex(int real=0,int imag=0){
        this->real=real;
        this->imag=imag;
    }

    Complex operator+(const Complex &obj){
        Complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;

        return res;

    }

    Complex operator-(const Complex &obj){
        Complex res;
        res.real=real-obj.real;
        res.imag=real-obj.imag;

        return res;
    }

    void display(){
        cout<<real<<" + i"<<imag;
    }
};


int main(){
    Complex c1(10,20),c2(30,40);
    Complex c;
    c=c1-c2;
    c.display();
}