// WAP THAT WILL ACCEPT THE CHARACTER AND CHECK WHETHER IT IS PALLINDROME OR NOT.


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range : ";
    cin>>n;
    char arr[n+1];      //NOTE : +1 IS ADDED FOR THE LAST/NULL CHARACTER : '\0'
    cout<<"Enter a word : ";
    cin>>arr;
    bool f=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i]){
            f=false;
            cout<<"WORD IS NOT PALINDROME.";
            break;
        }
    }
    if(f==true){
        cout<<"WORD IS PALINDROME.";
    }



    return 0;
}