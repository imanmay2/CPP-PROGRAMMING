// longest arithmetic subarray.
// e.g : [10,7,4,6,8,10,11]
//       sub-array :[2,4,6,8] 
//       output should be 4.
// exclude the condition for 0.(it means , if the difference between the number is 0 , then skip that).

#include<iostream>
#include<climits>
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


    //traversing from the difference array and finding the most repeating element from that array.
    int ct_d1[n];
    for(int i=0;i<n;i++){
        int ct=0;
        for(int j=0;j<n;j++){
            if(diff[j]==diff[i]){
                ct++;
            }
        } 
        ct_d1[i]=ct;     
    }

    //finding the max from the ct_d1 array.
    int max_no,min_no;
    max_no=INT_MIN;
    for(int j=0;j<n;j++){
        max_no=max(max_no,ct_d1[j]);
    }
    
    cout<<"The most repeating  difference consecutive elements is : "<<max_no+1<<endl;
    return 0;
}