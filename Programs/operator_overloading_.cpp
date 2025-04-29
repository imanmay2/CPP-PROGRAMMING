#include<iostream>
using namespace std;

class Test{
    private:
    int num;

    public:
    Test(int num){
        this->num=num;
    }

    void operator ++(){
        num=num+2;
    }

    void display(){
        cout<<"Number increment to : "<<num;
    }
};

int main(){
    Test t1(6);
    ++t1;
    t1.display();
}


#include<iostream>
using namespace std;

class X{
    public:
    int num;
    X(){}

    X(int num){
        this->num=num;
    }
    X operator+(const X &obj){
        return (num+obj.num);
    }

    void display(){
        cout<<"Sum is : "<<num;
    }
};

int main(){
    X obj1(10),obj2(20),obj3;
    obj3=obj1+obj2;
    obj3.display();
}


