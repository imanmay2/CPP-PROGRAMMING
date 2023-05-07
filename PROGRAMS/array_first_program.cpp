//accept n numbers from the user and display in the form o array//
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cout<<"ENTER THE NUMBER YOU WANNA INSERT IN YOUR ARRAY";
        cin>>array[i];
    }
    for(int j=0;j<n;j++){
        cout<<array[j]<<" ";
    }
    return 0;
}