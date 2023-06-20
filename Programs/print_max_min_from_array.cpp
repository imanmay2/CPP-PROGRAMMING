// WAP that will create an array of n elements from the user and print the maximum and minimum from the user


#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,ele;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element :: ";
        cin>>ele;
        arr[i]=ele;
    }
    //now accessing the maximum and the minimum number from the array.
    int max_no,min_no;
    max_no=INT_MIN;
    min_no=INT_MAX;
    for(int j=0;j<n;j++){
        max_no=max(max_no,arr[j]);
        min_no=min(min_no,arr[j]);
    }
    cout<<"The maximum from the array is : "<<max_no<<endl;
    cout<<"The minimum from the array is : "<<min_no<<endl;
    return 0;
}