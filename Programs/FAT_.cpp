// #include<iostream>
// #include<cstdlib>
// using namespace std;

// int main(){
//    int n;
      
//     cout<<"Enter the range of the array: ";
//     cin>>n;

//     int *arr=nullptr;
//     arr=(int*)malloc(n*sizeof(int));

//     for(int i=0;i<n;i++){
//         arr[i]=i+1;
//     }

//     //print the values.
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } cout<<endl;
   

//     free(arr);          
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the range of the array : ";
    cin>>n;
    int *arr=new int[n];
    
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    delete[] arr;



}