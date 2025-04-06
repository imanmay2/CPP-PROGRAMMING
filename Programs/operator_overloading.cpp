#include<iostream>
using namespace std;

class Test{
    int num;


    public:
    Test(){
        num=6;
    }

    void operator ++(){
        num=num+2;
    }
    
    void print(){
        cout<<"Num is : "<<num;
    }
};


int main(){
    Test test;
    ++test;
    test.print();

}