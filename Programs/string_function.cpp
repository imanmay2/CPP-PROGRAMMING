#include<iostream>
#include<string>
using namespace std;


int main(){
    string str;
    getline(cin,str);
    str.append("Anwesha");
    cout<<str<<endl;
    cout<<str.replace(0,6,"Anwesha");
}