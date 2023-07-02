//Bubble Sort - Repeatedly sqap two adejacent elements if they are in wrong order
// 12,45,23,51,19,8

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    // cout<<"The array you have entered is : "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<' ';
    // }
    //bubble sort algorithm starts here....
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            if(arr[j]>arr[j+1]){
                int k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    }
    cout<<"The sorted array is as follows : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}