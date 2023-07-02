//INSERTION SORT - insert an element from unsorted array to its correct 
//                 position in sorted array.
// 12,45,23,51,19,8

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element of thw array to be inserted in the array : ";
        cin>>arr[i];
    }
    // insertion sort algorithm
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"The sorted array is as follows : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

