#include<iostream>
using namespace std;

void display(vector<int> arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr;
    for(int i=1;i<=8;i++){
        arr.push_back(i);
    }
    for(auto i=arr.crbegin();i!=arr.crend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;


    
}