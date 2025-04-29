#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// void displayArr(){
    
// }

int main(){
    vector<int> arr;
    arr={1,2,3,4};
    for(auto i=arr.begin();i!=arr.end();i++){
        cout<<*i<<" ";
    } cout<<endl;

    cout<<arr.at(0)<<endl;
    cout<<arr.at(1)<<endl;
}