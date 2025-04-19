//Multiparameter class Template

#include<iostream>
using namespace std;

template<class t1,class t2>
class Number{
    t1 num1;
    t2 num2;

    public:
    Number(t1 num1,t2 num2){
        this->num1=num1;
        this->num2=num2;
    }

    t1 add(){
        return num1+num2;
    }
};



int main(){
    Number<int,double> n1(2,3.5);
    Number<double,int> n2(3.5,2);
    cout<<n1.add()<<endl;
    cout<<n2.add()<<endl;
}