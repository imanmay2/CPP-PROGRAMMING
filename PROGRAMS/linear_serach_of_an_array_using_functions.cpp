//linear search of an array using function//
#include<iostream>
using namespace std;
int LinearSearch(int array[] , int key , int n){
    for(int j=0;j<n;j++){
        if(array[j]==key){
            return j;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"ENTER THE RANGE OF THE ARRAY";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE ITEM YOU WANNA ENTER";
        cin>>array[i];
    }
    int key;
    cout<<"ENTER THE ELEMENT TO BE SEARCHED";
    cin>>key;
    cout<<"ELEMENT FOUND AT INDEX "<<LinearSearch(array,key,n);
    return 0;
}