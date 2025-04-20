#include<iostream>
#include<algorithm>
using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={200,23,1,0,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    display(arr,size);
    sort(arr,arr+size);
    display(arr,size);
    cout<<"Binary Search Check"<<endl;
    cout<<binary_search(arr,arr+size,2);
}