//Template Function

#include<iostream>
using namespace std;

template<class t> t add(const t &n1,const t &n2){
    return n1+n2;
}

int main(){
    cout<<"Addition is : "<<add(1,4)<<endl;
}