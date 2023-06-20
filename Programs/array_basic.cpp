// WAP that will accept elements of n , and store in the array.

#include<iostream>
using namespace std;
int main(){
    int n,ele;
    cout<<"Enter the number of elements you want to insert : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element you want to insert : ";
        cin>>ele;
        arr[i]=ele;   
    }
    //print the array
    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    return 0;
}