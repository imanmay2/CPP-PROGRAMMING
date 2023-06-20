// WAP that will create an array and also accept an element and find whether it is present or not in the array, if present return the index value.


#include<iostream>
using namespace std;
int main(){
    int n,ele;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>ele;
        arr[i]=ele;
    }
    // accepting an element and doing it's respective linear search.
    int f=0,num;
    cout<<"Enter the element to be searched for  : ";
    cin>>num;
    for(int j=0;j<n;j++){
        if(num==arr[j]){
            cout<<"Element has been found at index "<<j;
            f=1;
            break;

        }
    }
    if(f==0){
        cout<<"Element is not found in the array !!!!!!";
    }
    return 0;
    }