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
    list<int> arr;
    for(int i=0;i<5;i++){
        arr.push_back(i);
    }  

    display(arr);
    arr.pop_back();
    display(arr);
    cout<<arr.size()<<endl;
    for(auto i=arr.begin();i!=arr.end();i++){
        cout<<*i<<" ";
    } cout<<endl;

    cout<<"Inserting at a specific position : "<<endl;
    arr.insert(0,1);
    display(arr);
}