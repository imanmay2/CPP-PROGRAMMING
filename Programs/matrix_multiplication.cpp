// WAP THAT WILL ACCEPT 2D ARRAYS AND DISPLAY THE MULTIPLICATION OF THAT.


#inlcude<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the rows and coloumns for ARRAY_1 : "<<endl;
    cin>>m>>n;
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int num;
            cout<<"Enter the number : "<<endl;
            cin>>arr1[i][j];
        }
    }


     int m_=m;
     int n_=n;
     int arr2[m_][n_];
    for(int i=0;i<m_;i++){
        for(int j=0;j<n_;j++){
            int num_;
            cout<<"Enter the number : "<<endl;
            cin>>arr2[i][j];
        }
    }

    //creating new array, for storing the multiplication of the previous arrays

    int arr_[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            // logic to be deployed over here....
        }
    }
}