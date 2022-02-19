#include<iostream>
using namespace std
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE NUMBER TO BE INSERTED IN THE ARRAY";
        cin>>arr[i];
    }
    int MaxNo=INT_MIN;
    int MinN0=INT_MAX;
    for(int j=1;j<n;j++){
        if(arr[i]>MaxNo){
            maxNo=max(arr[i],MaxNo);
        }
        else if(arr[i]>MinNo){
            MinNo=min(arr[i],MinNo);
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;

}