// Searching an element in a matrix of 2D.

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the rows and coloumn of the 2D matrix : ";
    cin>>m>>n;
    int arr[m][n];
    

    //inserting elements in the array.
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the element : ";
            cin>>arr[i][j];
        }
    }
    int num;
    bool flag=false;
    cout<<"ENTER THE ELEMENT TO BE SEARCHED FOR : ";
    cin>>num;

    //traversing the @D array.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==num){
                flag=true;
                cout<<"Element is present in the array!!";
                break;
            }
        }
    }
    if(flag==false){
        cout<<"Element is not present in the list";
    }

    return 0;

}