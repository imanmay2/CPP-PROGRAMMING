#include<iostream>
#include<vector>
using namespace std;


void displayMatrix(vector<vector<int>> matrix){
    for(const auto &row:matrix){
        for(int i:row){
            cout<<i<<" ";
        } cout<<endl;
    }
}


int main(){
    int rows=4,cols=3;
    vector<vector<int>> matrix(rows,vector<int>(cols));
    int val=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            matrix[i][j]=val++;
        }
    }
    displayMatrix(matrix);
}