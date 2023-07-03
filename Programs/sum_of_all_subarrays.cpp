// Given an array a[] of size n. Output sum of each subarray of the given array.


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        // inserting the elements into the array.
        cout<<"Enter the elements in the array : ";
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s=s+a[j];
            cout<<s<<endl;
        }
        return 0;
    }
}