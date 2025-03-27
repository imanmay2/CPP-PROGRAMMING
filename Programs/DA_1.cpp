// 1.A parking lot has 50 slots arranged in a single row. Assign parking slots as follows:
// · Vehicles with an odd number are cars (C).
// · Vehicles with an even number are bikes (B).
// · Every 5th slot is reserved for heavy vehicles (H).

// Write a program to:
// 1. Display the parking slot allocation.
// 2. Count the total number of cars, bikes, and heavy vehicles.
// Sample Input:
// Enter the total number of parking slots: 50
// Slot Allocations:
// C B C B H C B C B H
// C B C B H C B C B H
// C B C B H C B C B H
// C B C B H C B C B H
// C B C B H.
// Total Cars: 25

// Total Bikes: 20

// Total Heavy Vehicles: 5
#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of slots for parking : ";
    cin>>n;
    int ct_h=0,ct_b=0,ct_c=0;
    for(int i=1;i<=n;i++){
        if(i%10==0){
            cout<<"H ";
            cout<<endl;
        }
        else if(i%5==0){
            cout<<"H ";
            ct_h++;
        } else if(i%2==0){
            cout<<"B ";
            ct_b++;
        } else if(i%2!=0){
            cout<<"C ";
            ct_c++;
        }
    } cout<<endl;
    cout<<"Total Cars : "<<ct_c<<endl;
    cout<<"Total Bikes : "<<ct_b<<endl;
    cout<<"Total Heavy Vehicles: "<<ct_h<<endl;
    
}