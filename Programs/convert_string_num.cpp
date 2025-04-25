//Write a program that will convert string into number.

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

void string_to_num(string str){
    int num=0;
    int n=pow(10,str.size());
    //Number is let's say : 1234.
    for(int i=0;i<str.length();i++){
        
    }

    cout<<"Number is : "<<num;
}

int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    
    string_to_num(str);

}