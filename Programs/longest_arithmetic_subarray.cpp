// longest arithmetic subarray.
// e.g : [10,7,4,6,8,10,11]
//       sub-array :[2,4,6,8] 
//       output should be 4.
// exclude the condition for 0.(it means , if the difference between the number is 0 , then skip that).

#include<iostream>
using namespace std;
int main()
{
    int n,d,i;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }

    //traversing the array.
    int diff[n];
    for(int i=0;i<n-1;i++){
        d=arr[i+1]-arr[i];
        if(d<0){
            d=d*(-1);
            diff[i]=d;
        }
        else if(d>0){
            diff[i]=d;
        }
        
         
    }

    // cout<<"Difference list is as follows : ";
    // for(int j=0;j<n-1;j++){
    //     cout<<diff[j]<<" ";
    // }

    return 0;
}