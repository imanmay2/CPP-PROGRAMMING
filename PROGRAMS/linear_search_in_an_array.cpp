//linear search of an array//
#include<iostream>
using namespace std;
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
    for(int j=0;j<n;j++){
        if(key==array[j]){
            cout<<"ELEMENT FOUND AT INDEX "<<j;
        }
    }
    return 0;
}