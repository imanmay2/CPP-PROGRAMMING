// WAP that will display the count of the most repeating string and the string too.


#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    string alpha="abcdefghijklmnopqrstuvwxyz";;
    string str;
    cout<<"ENTER THE STRING : ";
    getline(cin,str);
    int arr[26];
    for(int i=0;i<str.size();i++){
        int ct=0;
        for(int j=0;j<str.size();j++){
            if(str[i]==str[j]){
                ct++;
            }
        }
        // logic needed here/
    }
    // for(int i=0;i<26;i++){
    //     cout<<arr[i]<<endl;
    // }
    int maxi=INT_MIN;
    int indx=0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            indx=i;
        }
    }
    cout<<"THE MOST REPEATED ALPHABET IS : "<<str[indx]<<endl;
    cout<<"AND IT'S FREQUENCY IS : "<<maxi;
    return 0;
}