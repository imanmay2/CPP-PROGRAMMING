#include<iostream>
#include<string>
using namespace std;

void reverse(str &arr,int);

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int size=str.length();

    reverse(str,size);



    for(int i=0;i<size;i++){
        cout<<str[i];
    }
}


void reverse(str &arr,int n){
    int left=0;
    int right=n-1;
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;


        left++;
        right--;
    }
}