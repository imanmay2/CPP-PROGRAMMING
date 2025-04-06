#include<iostream>
using namespace std;

class Base{
    public:

    virtual void print()=0;  //pure virtual function.
};
class Derived:public Base{
    public:
    void print(){
        cout<<"Derived Class."<<endl;
        // Base::print();
    }
};


int main(){
    // Derived d1;
    // d1.print();

    Base *b;
    Derived d;
    b=&d;
    b->print();// Late binding
    // d.print();
    
}