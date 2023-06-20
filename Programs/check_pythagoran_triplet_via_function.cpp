// WAP that will check whether the entered triplet is pythagoran triplet or not
#include<iostream>
using namespace std;
bool check(int a,int b,int c){
    if(a*a==(b*b)+(c*c))
    return true;
    else if(b*b==(a*a)+(c*c))
    return true;
    else if(c*c==(b*b)+(a*a))
    return true;
    else
    return false;
}
int main(){
    int a,b,c;
    cout<<"Enter the triplet respectively";
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"Pythagoran Triplet";
    }
    else{
        cout<<"Not a Pythagoran Triplet";
    }
    return 0;
}