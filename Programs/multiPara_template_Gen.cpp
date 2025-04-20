//multipara_template_


#include<iostream>
using namespace std;

template<class T1,class T2>
class Number{
    T1 num1;
    T2 num2;

    public:
    Number(T1 num1,T2 num2){
        this->num1=num1;
        this->num2=num2;
    }

    T1 add(){
        return num1+num2;
    }
};

int main(){
    Number<int,double> n1(5,5.5);
    Number<double,int> n2(6.5,5);
    cout<<n1.add()<<endl;
    cout<<n2.add();
}