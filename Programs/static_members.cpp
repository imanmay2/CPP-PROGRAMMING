#include<iostream>
using namespace std;
class staticTest{
    public:
    static int x;
    staticTest(){
        cout<<"Constructor is called."<<endl;
    }
    ~staticTest(){
        cout<<"Destructor is called."<<endl;
    }
};
int staticTest::x=2;
int main(){
    staticTest s1;
    cout<<"Value of the static variable is : "<<staticTest::x<<endl;

    return 0;
}