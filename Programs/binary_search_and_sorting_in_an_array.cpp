//binary search of an array after doing the sorting of the array//
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE RANGE OF THE ARRAY";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE ITEM TO BE ADDED IN THE ARRAY";
        cin>>array[i];
    }
    //sorting here
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                int t=array[j];
                array[j]=array[i];
                array[i]=t;
            }
        }
    }
    int key;
    cout<<"ENTER THE ELEMENT TO BE SERACHED";
    cin>>key;
    int s=0,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            cout<<"ELEMENT FOUND AT INDEX "<<mid;
            break;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return -1;
}