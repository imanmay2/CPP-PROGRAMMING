#include<iostream>
using namespace std;


class Add{
    private:
    int num;

    public:
    Add(int num){
        this->num=num;
    }

    Add operator +(const Add &obj);
    void display();
};

Add Add::operator+(const Add &obj){
    return (num+obj.num);    
}

void Add::display(){
    cout<<"Sum is: "<<num;
}


int main(){
    Add obj1(20),obj2(20);
    Add obj3=obj1+obj2;
    obj3.display();
}