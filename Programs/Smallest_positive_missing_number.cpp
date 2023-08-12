//3. Smallest positive missing number . 
//Accoute,Amazon,Samsung,Snapdeal

//You are given an array arr[] of N integres including 0. the task is to find the smallest
//positive number missing from the array.
//e.g : [0,-9,1,3,-4,5]
//Hence, the first positive missing number is 2.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    int ct=0,p=-1,f=0;
    for(int i=0;i<n;i++){
        for(int k=0;k<n-(i+1);k++){
            if(arr[k]>arr[k+1]){
                int a=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=a;
            }
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]>0 and ct==0 and p==-1){
            ct++;
            p=arr[j];
        }
        else if(arr[j]>0 and p!=arr[j] and p!=-1){
            if(arr[j]==p+1){
                p=arr[j];
            }
            else if(arr[j]!=p+1){
                cout<<"Smallest positive missing number : "<<p+1;
                f=1;
                break;
            }
        }
    }
    if(f==0){
        cout<<"Oops!! There is no smallest missing positive number from the given array.";
    }
        
        
return 0; 
}
