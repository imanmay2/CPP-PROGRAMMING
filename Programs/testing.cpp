#include<iostream>
#include<string>
using namespace std;
class Sum_{
    public:
    Sum_(int a,int b){
        cout<<"Sum is : "<<a+b;
    }
};
int sum(int a,int b);
int main(){
    int a,b;
    cin>>a>>b;
    Sum_ s1(a,b);
}

