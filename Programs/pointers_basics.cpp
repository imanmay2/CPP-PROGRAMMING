#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr; // declaring a pointer variable for a.
    aptr=&a;
    cout<<"Adrress of "<<a<<"is : "<<aptr<<endl; // printing the address of the value of a.
    cout<<"Value of the adrressed value  : "<<*aptr; // de-referencing to get the value from the desired address.
    return 0;
}