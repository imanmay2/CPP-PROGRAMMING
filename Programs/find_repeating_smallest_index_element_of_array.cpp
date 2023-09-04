//1. Given an array arr[] of size N. The task is to find the first repeating element in the array of integres. i.e an
//element that occurs more than once and whose index of the first occurence is smallest.
//	E.g : [1,5,3,4,3,5,6]
//	 output : 2               (FACEBOOK , AMAZON )

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    // traversing the array.
    int ct=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                ct++;
                if(ct==2){
                    cout<<"The First repeating element is : "<<arr[i]<<" And it's position is : "<<i+1;
                    break;
            }
        }
        
        }
    }
    return 0;
}

