//Template Function

#include<iostream>
using namespace std;

template<class t,class t1> t add(t const &num1,t1 const &num2){
    return num1+num2;
}

int main(){
    cout<<add(1,3.5)<<endl;
    cout<<add(3.5,1)<<endl;
}