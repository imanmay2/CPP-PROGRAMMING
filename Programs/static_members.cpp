#include<iostream>
using namespace std;
class staticTest{
    static int x;
    staticTest(){
        cout<<"Constructor is called."<<endl;
    }

    //Destructor.
    ~staticTest(){
        cout<<"Destructor is called."<<endl;
    }
};

int staticTest::x=2; // Setting the static variable to 2.
int main(){
    cout<<"Accessing the static variable : "<<staticTest::x<<endl;
}