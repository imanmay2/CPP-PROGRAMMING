// WAP that will accept a sentence and display its longest word along with its length.


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the sentence : ";
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int currlen=0,maxlen=0,st=0,maxst=0;
    while(1){
        if(currlen>maxlen){
            maxlen=currlen;
            maxst=st;
        }
        currlen=0;
        st=i+1;
        else{
            currlen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++){
        cout<<arr[i+maxst];
    }
    return 0;
}