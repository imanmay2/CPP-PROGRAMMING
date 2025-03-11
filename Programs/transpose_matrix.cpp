#include<iostream>
using namespace std;


class Matrix{
    public:
    int arr[1000][1000];
    int rows,cols;
    Matrix(int arr[1000][1000],int rows,int cols){
        this->rows=rows;
        this->cols=cols;
        cout<<"Original Matrix is: "<<endl;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                this->arr[i][j]=arr[i][j];
                cout<<arr[i][j]<<" ";
            } cout<<endl;
        }
    }

    void Transpose(){
        cout<<"Transpose Matrix: "<<endl;
        for(int i=0;i<cols;i++){
            for(int j=0;j<rows;j++){
                cout<<arr[j][i]<<" ";
            } cout<<endl;
        }
    }
};

int main(){
    int rows,cols;
    cin>>rows>>cols;
    int arr[1000][1000];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    Matrix m(arr,rows,cols);
    m.Transpose();
    
}