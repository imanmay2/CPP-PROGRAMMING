//Write a program that will convert string into number.

#include<iostream>
#include<math.h>
#include<string>
using namespace std;


int reverseNum(int num){
    int res=0;
    while(num!=0){
        int r=num%10;
        res=res*10+r;
        num=num/10;
    }
    return res;
}

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


string num_to_string(int num){
    num=reverseNum(num);
    bool neg=false;
    if(num<0){
        neg=true;
        num=num*(-1);
    }
    string result="";
    while(num!=0){
        char dig='0'+(num%10);
        result=result+dig;
        num=num/10;
    }
    if(neg==true){
        return '-'+result;
    } else {
        return result;
    }
}


int main(){
    
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Your desired string is : "<<num_to_string(num);
}