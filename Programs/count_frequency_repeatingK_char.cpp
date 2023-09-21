// TAKE INPUT A STRING AND DISPLAY THE MOST OCCURENCE STRING AND IT'S COUNT OF THE FREQUENCY TOO.
// example : 'abcdaabc'

#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
bool check_str(int n, string arr,string s){
    for(int i=0;i<n;i++){
        if(s==arr[i]){
            return true;
        }
    }
}
int main(){
    string str;
    getline(cin,str);
    string arr[str.size()];
    for(int i=0;i<str.size();i++){
        if(!check_str(str.size(),arr,str[i])){
            arr[i]=str[i];
        }
    }

    cout<<arr;
    return 0;
}