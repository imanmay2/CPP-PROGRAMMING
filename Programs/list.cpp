#include<iostream>
#include<list>
using namespace std;


void display(list<int> arr){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}


int main(){
    list<int> arr={1,2,3,4};

    arr.push_back(5);
    arr.push_front(0);
    display(arr);
    arr.pop_back();
    display(arr);
}