#include<iostream>
#include<string>
using namespace std;


void toggleCase(string &str){
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        } else{
            str[i]=str[i]-32;
        }
    }
}


int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<str<<endl;
    toggleCase(str);
    cout<<str;
}