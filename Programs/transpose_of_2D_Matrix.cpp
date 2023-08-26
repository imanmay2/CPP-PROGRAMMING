// Print the transpose of  a  square matrix.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the order of the square matrix : ";
    cin>>n;
    int arr[n][n];
    int arr1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the element  : ";
            cin>>arr[i][j];
        }
    }


    //transposing the matrix.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr1[i][j]=arr[j][i];
        }
    }

    //printing the transposed array.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}