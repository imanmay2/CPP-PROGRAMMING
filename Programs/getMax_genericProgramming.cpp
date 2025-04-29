#include<iostream>
using namespace std;

template<class T>
class Num{
    T num1,num2;

    public:
    Num(T num1,T num2){
        this->num1=num1;
        this->num2=num2;
    }

    T getMaxVal();
};


template<class T>
T Num<T>::getMaxVal(){
    return (num1>num2?num1:num2);
}

int main(){
    int n1,n2;
    cout<<"Enter the numbers : ";
    cin>>n1>>n2;
    Num<int> num(n1,n2);
    cout<<"Maximum number is : "<<num.getMaxVal();

}