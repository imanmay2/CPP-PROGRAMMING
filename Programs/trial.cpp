#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the number : ";
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }

    int a;
    cout<<"Enter the number to be changed : ";
    cin>>a;
    

    arr[1]=a;
    cout<<"value changed successfully";

    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
}