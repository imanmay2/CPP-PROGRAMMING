#include<iostream>
using namespace std;

class Base{
    public:
    Base(){}
    void print(){
        cout<<"Called from Base."<<endl;
    }

    // virtual ~Base(){}
};

class Child:public Base{
    void print(){
        cout<<"Called from Child."<<endl;
    }
};

int main(){
    Base *b;
    Child c;
    b=&c;
    b->print();
}



#include<iostream>
using namespace std;

class Base{
    public:
    Base(){}
    virtual void print()=0; //Creating  an abstract class.
    virtual ~Base(){}
};

class Derived:public Base{
    public:
    void print() override{
        cout<<"Called from Derived Class";
    }
};


int main(){
    Base *b;
    Derived d;
    b=&d;
    b->print();
}