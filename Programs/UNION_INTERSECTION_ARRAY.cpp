// Find the union and intersection of 2 arrays.



#include<iostream>
#include<cmath>
using namespace std;
bool check(int n,int arr[],int m){
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(m==arr[i]){
            return false;
            c++;
            break;
        }
    }
    if(c==0){
        return true;
    }
    return true;
    
}

int main(){
    int n1;
    cout<<"Enter the size of array in 1st array : "<<endl;
    cin>>n1;
    int n2;
    cout<<"Enter the size of the array in 2nd array : "<<endl;
    cin>>n2;
    int arr_1[n1];
    int arr_2[n2];
    for(int i=0;i<n1;i++){
        cout<<"Enter the number for arr_1 : "<<endl;
        cin>>arr_1[i];
    }

    for(int i=0;i<n2;i++){
        cout<<"Enter the number for arr_2 : "<<endl;
        cin>>arr_2[i];
    }

    // main logic starts here.

    int m=max(n1,n2);
    int arr_u[m];
    int arr_i[m];
    int ct_u=-1;
    int ct_i=-1;
    
    // code for union.
    for(int i=0;i<n1;i++){
        if(check(m,arr_u,arr_1[i])){
            ct_u++;
            arr_u[ct_u]=arr_1[i];
        }
    }
    for(int k=0;k<n2;k++){
        if(check(m,arr_u,arr_2[k])){
            ct_u++;
            arr_u[ct_u]=arr_2[k];
        }
    }

    int v=sizeof(arr_u)/sizeof(arr_u[0]);    // checking the no. of elements in the arr_u 


    //let's see the union array.
    cout<<"UNION ELEMENTS -------- "<<endl;
    for(int i=0;i<v;i++){
        cout<<"** "<<arr_u[i]<<" **"<<endl;
    }
    


}
