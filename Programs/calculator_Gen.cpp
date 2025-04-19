//Write a program to create a calculator using class Template.


#include<iostream>
using namespace std;

template<class T>
class Calculator{
    T num1;
    T num2;

    public:
    Calculator(T num1,T num2){
        this->num1=num1;
        this->num2=num2;
    }

    void display(){
        add();
        subs();
        multi();
        div();
    }
    void add(){
        cout<<"Addition is : "<<num1+num2<<endl;
    }
    void subs(){
        cout<<"Substraction is : "<<num1-num2<<endl;
    }
    void multi(){
        cout<<"Multiplication is : "<<num1*num2<<endl;
    }
    void div(){
        cout<<"Division is : "<<num1/num2<<endl;
    }
};

int main(){
    Calculator<int> c1(1,3);
    Calculator<double> c2(1.2,3.6);
    cout<<"Output 1 : "<<endl;
    c1.display();
    cout<<"Output 2 : "<<endl;
    c2.display();
    
}