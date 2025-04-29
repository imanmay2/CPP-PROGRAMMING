#include<iostream>
using namespace std;
class Example{
    private:
    static int count;

    public:
    Example(){
        count++;
    }
    static void showCount();
};

void Example::showCount(){
    cout<<"No. of objects created are: "<<count;
}

int Example::count=0;

int main(){
    Example e1,e2,e3,e4;
    Example::showCount();
}