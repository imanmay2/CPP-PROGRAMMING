//Rectangular pattern  : Row 5 , Column 4
/*
####
####
####
####
####
*/


#include<iostream>
using namespace std;
int main(){
    int i,j;
    int row,col;
    cout<<"Enter the rows and column";
    cin>>row>>col;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}