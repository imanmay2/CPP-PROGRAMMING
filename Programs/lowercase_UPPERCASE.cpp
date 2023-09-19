// WAP THAT WILL ACCEPT A STRING FROM THE USER AND DISPLAY BOTH THE UPPERCASE AND LOWERCASE .


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    cout<<endl;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<"THE STRING IN UPPERCASE FORMAT IS : "<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<"THE STRING IN LOWERCASE FORMAT IS : "<<s<<endl;
    return 0;
    
}