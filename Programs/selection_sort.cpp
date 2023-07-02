// SELECTION SORT. ---- find the minimum element in unsorted array and swap it with element  at the bginning
// 12,45,23,51,19,8


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int arr[n];     //initilisation of the array
    for(int k=0;k<=n-1;k++){
        cout<<"Enter the item : ";
        cin>>arr[k];                // inserting elements into the array
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            int k=arr[j];
            arr[j]=arr[i];
            arr[i]=k;
            }
        }
    }
    cout<<"Sorted Array is of follows : ";
    for(int y=0;y<n;y++){
        cout<<arr[y]<<" ";
    }
}




// BRAIN TEASER : 
/*
You have 15 rupees in your hand to buy chocolates, 1 Rs = 1 chocoloate , and also 3 wrappers = 1 chocoloate ...
So, what is the maximum number of chocolates , you can buy ?

Ans : 15 Rs= 15 Chocolates , thn 15/3 = 5 chocolates extra(bcz of wrappers), now 5-3=2 .....3 wrappers are used to buy one more chocolates
, so remaining 2 chocolates + 1 chocolate (from wrapper),,,, we have total 3 chocolates , again from 3 wrappers , we got , 1 chocolates ,

So in total : 15+5+1+1= 22 chocolates in total ......
*/