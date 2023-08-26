// WAP THAT WILL ACCEPT THE CHARACTER AND CHECK WHETHER IT IS PALLINDROME OR NOT.


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range : ";
    cin>>n;
    int arr[n+1];      //NOTE : +1 IS ADDED FOR THE LAST/NULL CHARACTER : '\0'
    cout<<"Enter a word : ";
    cin>>arr[n+1];
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[n-1-i]){
            f++;
        }
    }

    cout<<n<<f;
    if(f==n) {
        cout<<"WORD ENTERED IS PALLINDROME";
    }
    else{
        cout<<"WORD IS NOT PALLINDROME";
    }
    

    return 0;
}