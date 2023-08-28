//WAP THAT WILL ACCEPT A SENTENCE AND PRINT THE LARGEST WORD FROM THAT SENTENCE/.


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<n;
    cin.ignore();
    char arr[n+1];
    cout<<"Enter the sentence : ";
    cin.getline(arr,n);
    cin.ignore();
    int maxi=0,f=0,i=0;
    while(arr[i]!='\0'){
        i++;
        f++;
        if(arr[i]==' '){
            f--;
            maxi=max(maxi,f);
            f=0;
        }
    }
    cout<<"LONGEST WORD IN THE SENTENCE IS : "<<maxi;
}