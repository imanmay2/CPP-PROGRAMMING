#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE RANGE OF THE ARRAY";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE NUMBER TO BE INSERTED IN THE ARRAY";
        cin>>arr[i];
    }
    int ct=1;
    while(n>ct){
        for(int j=0;j<=n-ct;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
        ct++;
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}