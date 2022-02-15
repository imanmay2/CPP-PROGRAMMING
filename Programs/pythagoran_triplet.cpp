//to check whether the entered sides are the pythagoran triplets or not.
#include<iostream>
using namespace std;
bool check(int a,int b,int c){
    if(((a*a)==(b*b)+(c*c)) || ((b*b)==(a*a)+(c*c)) || ((c*c)==(b*b)+(a*a))){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter the sides of the triangle";
    cin>>a>>b>>c;
    if(check(a,b,c)==true){
        cout<<"Yes a PYTHAGORAN TRIPLET";
    }
    else{
        cout<<"Not a PYTHAGORAN TRIPLET";
    }

}