// SELECTION SORT. ---- find the minimum element in unsorted array and swap it with element  at the bginning
// 12,45,23,51,19,8


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int arr[n];     //initilisation of the array
    for(int k=0;k<=n-1;k++){
        cout<<"Enter the item : ";
        cin>>arr[k];                // inserting elements into the array
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            int k=arr[j];
            arr[j]=arr[i];
            arr[i]=k;
            }
        }
    }
    cout<<"Sorted Array is of follows : ";
    for(int y=0;y<n;y++){
        cout<<arr[y]<<" ";
    }
}