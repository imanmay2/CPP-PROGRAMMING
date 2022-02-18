//arrange a array in an ascending order/sorted order//
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
    cout<<"ARRAY IN ASCENDING (SORTED) ORDER IS AS FOLLOWS";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}

    