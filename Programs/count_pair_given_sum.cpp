// Write a program that will find the pair of the given sum in the ARAAY.


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the sixe of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the Number : ";
        cin>>arr[i];
    }
    int s;
    cout<<"**Enter the Sum : "<<endl;
    cin>>s;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s==arr[i]+arr[j]){
                cout<<"Pair Found !!!!"<<endl;
                cout<<endl;
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
    return 0;
}