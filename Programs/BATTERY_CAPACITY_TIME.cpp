// Code to check the timing of my Mac's battery..according to it's present capacity..


#include<iostream>
using namespace std;
int main(){
    int b_capa,t_new;
    cout<<"Enter the current battery capacity : "<<endl;
    cin>>b_capa;
    cout<<"Enter the timing of your battery backup when it's new : "<<endl;
    cin>>t_new;
    double t_capa=(t_new*b_capa)/100;
    cout<<"Currently, Your Macbook can give you an average backup of around : "<<setprecision(4)<<t_capa;
}