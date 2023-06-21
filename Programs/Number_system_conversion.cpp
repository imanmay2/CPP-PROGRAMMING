// WAP that will convert the number systems : for the following
/*
1. Binary to decimal
2. octal to decimal
3. hexadecimal to decimal
4. decimal to binary
5. decimal to octal
6. decimal to hexadecimal
7. ADD 2 BINARY NUMBERS
*/



#include<iostream>
#include<math.h>
using namespace std;

string rev(string s){
    // FUNCTION FOR REVERSING THE STRING
    string s1;
    for(int i=s.size();i>-1;i++){
        s1=s1+s[i];
    }
    return s1;
}
int bin_deci(string bin){
    int s=0;
    string s1;
    s1=rev(bin);
    for(int i=0;i<s1.size();i++){
        s=s+(pow(2,i)*int(s1[i]));
    }
    return s;
    
}
int main(){
    string s;
    cout<<"binary to decimal : ";
    cin>>s;
    cout<<"the binary to0 decimal conversion is : "<<bin_deci(s)<<endl;
    return 0;
}