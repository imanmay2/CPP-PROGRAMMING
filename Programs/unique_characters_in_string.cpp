#include<iostream>
#include<string>
using namespace std;
bool check(string &s,char c){
    if(s.length()){
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                return true;
            }
        } return false;
    }return false;
}

void unique(string &str){
    string s="";
    for(int i=0;i<str.length();i++){
        if(!check(s,str[i])){
            int count=0;
            for(int j=0;j<str.length();j++){
                if(str[j]==str[i]){
                    count++;
                }
            }
            cout<<"Count of "<<str[i]<<" is "<<count<<endl;
            s=s+str[i];
        }
    }
}

int main(){
    string str;
    getline(cin,str);
    // cout<<"String: "<<str;
    unique(str);
}