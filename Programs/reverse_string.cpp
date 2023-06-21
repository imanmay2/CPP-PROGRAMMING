// WAP THAT WILL ACCEPT A STRING AND DISPLAY IT'S REVERSE


#include<iostream>
using namespace std;
int main(){
    string s,s1;
    cout<<"Enter the string : ";
    cin>>s;
    for(int i=s.size()-1;i>-1;i--){
        s1=s1+s[i];
    }
    cout<<"The reversed string is : "<<s1<<endl;
    return 0;
}