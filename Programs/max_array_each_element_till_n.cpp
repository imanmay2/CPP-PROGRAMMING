// Given an array a[] of  size n. For every i from  to n-1 
// output max (a[0].a[1],.....,a[i])


#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        //inserting the elementts into the array 
        cout<<"Enter the element : ";
        cin>>a[i];
    }


    int mx=INT_MIN;
    for(int j=0;j<n;j++){
        mx=max(mx,a[j]);
        cout<<mx<<endl;
    }
    return 0;
}