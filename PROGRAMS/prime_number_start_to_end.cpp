#include<iostream>
using namespace std;
int check_Prime(int num){
    int ct=0;
    for(int i=1;i<=num;i++){
        if(num%i==0)
        ct++;
    }
    if(ct==2)
    return 1;
    else
    return 0;

}
int main()
{
    int s,e;
    cout<<"Enter the starting and the ending range";
    cin>>s>>e;
    cout<<"Prime Numbers from "<<s<<"to "<<e<<"are : "<<endl;
    for(int i=s;i<=e;i++){
        if(check_Prime(i)==1)
        cout<<i<<endl;
    }
    return 0;
}