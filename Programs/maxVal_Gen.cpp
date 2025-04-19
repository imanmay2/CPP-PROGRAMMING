//WAP that will display the maximum number using class Template.

#include<iostream>
using namespace std;

template<class T>
class Max{
    T n1,n2;

    public:
    Max(T num1,T num2){
        n1=num1;
        n2=num2;
    }

    T displayGreater();
};

template<class T>
T Max<T>::displayGreater(){
    return (n1>n2?n1:n2);
}

int main(){
    Max<int> m1(10,20);
    Max<double> m2(20.2,10.4);
    cout<<"Greater is : "<<m1.displayGreater()<<endl;
    cout<<"Greater is : "<<m2.displayGreater();
}