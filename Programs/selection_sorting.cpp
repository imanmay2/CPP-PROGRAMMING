#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range of the array";
    cin>>n;
    int arr[n];
    for(int s=0;s<n;s++){
        cin>>arr[s];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }

    }
    cout<<"ARRAY SORTED IN SORTED ORDER BY MEANS OF SELECTION   ";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}