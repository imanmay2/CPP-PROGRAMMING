#include<iostream>
using namespace std;


class Base{
    public:
    Base(){
        cout<<"Hello";
    }
    
    virtual void hello(){
        cout<<"Hello from Parent ";
    }
};


class child:public Base{
    void hello(){
        cout<<"Hello from child.";
    }
};

int main(){

}