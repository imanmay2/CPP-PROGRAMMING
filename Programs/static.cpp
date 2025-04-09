#include<iostream>
using namespace std;

class eg{
    private:
    static int ct;

    public:
    eg(){
        ct++;
    }

    static void show(){
        cout<<"Object created  : "<<ct;
    }
};
int eg::ct=0;
int main(){
    eg e1,e2;
    eg::show();
}