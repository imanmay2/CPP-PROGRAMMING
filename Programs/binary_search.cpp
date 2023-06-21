// WAP that will search an element of an array, and search it via BINARY SEARCH

#include<iostream>
using namespace std;
int main()
{
    int arr,n;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int arr[n];
    int s=0,e=n,mid=0;
    // inserting elements into the array
    int ele;
    for(int i=0;i<n;i++){
        cout<<"Enter the element to be inserted into the array : ";
        cin>>ele;
        arr[i]=ele;
    }
    int key;
    cout<<"Enter the key to be searched for : ";
    cin>>key;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==key){
            cout<<"Found element at "<<mid;
            break;
        }
        else if(arr[mid]>key){
            mid=e-1;
        }
        else {
            mid=s+1;
        }
    }
    return 0;

}