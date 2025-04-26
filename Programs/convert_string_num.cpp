//Write a program that will convert string into number.

#include<iostream>
#include<math.h>
#include<string>
using namespace std;




int string_to_num(string str){
    int num=0;
    int n=pow(10,str.size()-1);
    for(int i=0;i<str.size();i++){
        int dig=str[i]-'0';
        if(dig<0 || dig>9){
            cout<<"Invalid Character entered ! "<<endl;
            return 0;
        }
        num=num+(dig*n);
        n=n/10;
    }
    return num;
}



int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"Your number is : "<<string_to_num(str);
}