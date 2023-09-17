// THIS FILE GENERALLY CONTAINS THE BASICS OF STRING ,,...

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2,i="789";
    cout<<"Enter string : ";
    getline(cin,s1);
    getline(cin,s2);
    cout<<s1.append(s2)<<endl;  // use of the append function
    //cout<<s1+s2<<endl;      //concatenation 
    cout<<s1.at(3)<<endl;     // use of at function
    //cout<<s1[3]<<endl;       // finding a index value
    //cout<<s2.clear();    // clear function is use to erase the content stored in the variable
    //cout<<s2<<endl;
    // if(!s1.empty()){       // checking the empty function
    //     cout<<"Not empty"<<endl;
    // }
    s1.erase(3,5);        // to erase a particular substring from the string
    cout<<s1<<endl;
    cout<<s2.find('m')<<endl;     // to find a particular value/ string from the string
    s1.insert(3,"many ");
    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    //s1.resize(4);    // resize the string of first 4 strings
    cout<<s1<<endl;
    cout<<s1.substr(3,4); // returns the substring from the string
    cout<<stoi(i)+2<<endl;
    int x=789;
    cout<<to_string(x)+'2'<<endl;
    return 0;
}