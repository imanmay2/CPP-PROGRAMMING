// BASICS OF POINTERS , ACCESSING THE ADDRESS, DE-REFERENCING .

#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr; // declaring a pointer variable for a.
    aptr=&a;
    cout<<"Adrress of "<<a<<"is : "<<aptr<<" "<<aptr+1<<endl; // printing the address of the value of a.
    cout<<"Value of the adrressed value  : "<<*aptr; // de-referencing to get the value from the desired address.

    return 0;
}



//NOTE : if we are increasing the address of a integer pointer then , each time increasing by +1 , it will be increased by +4.
//                                             char  pointer then , it will be increased by 1  , on increasing +1 each times.