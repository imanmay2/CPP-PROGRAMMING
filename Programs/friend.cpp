#include<iostream>
using namespace std;


class Test{
    private:
    int distance;

    public:
    Test(int i){
        distance=i;
    }

    friend void show(Test t);
};

void show(Test t){
    cout<<"Distance is : "<<t.distance;
}

int main(){
    Test t1(100);
    show(t1);
}