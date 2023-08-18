//2. google , facebook , amazon , visa
 
 //Q  : sum of the given subarray
//Given an unsorted array of A of size N  of non-negative integres, find a continuos subarray
//which adds to a given number S.
//E.G N=5,S=12
//    A[]=[1,2,3,7,5]
//OUTPUT: 2 ,4 
//EXPLAINATION : The sum of elements from 2nd position to 4th position is 12.



#include<iostream>
using namespace std;
int main(){
    int n,f=0;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }

    int S;
    cout<<"Enter the sum : ";
    cin>>S;
    //traversing the array.
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s=s+arr[j];
            if(S==s){
                
                cout<<i<<j;
                f=1;
                break;
            }
        }
    }
    if(f==0){
        cout<<"SORRY !! SUM DOESN'T EXIXTS IN THE GIVEN ARRAY!!";
    }
    return 0;
}
