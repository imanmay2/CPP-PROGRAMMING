#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE RANGE OF THE ARRAY";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE NUMBER YOU WANNA ENTER";
        cin>>arr[i];
    }
    for(int j=1;j<n;j++){
        int current=arr[j];
        int k=j-1;
        while(arr[k]>current && k>=0){
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]==current;
    }
    for(int s=0;s<n;s++){
        cout<<arr[s]<<" ";
    }
    return 0;
}