// WAP THAT WILL SWAP THE VALUE BY USING THE CONCEPT OF POINTERS.


#include<iostream>
using namespace std;
void swap(int *a,int *b){        // INITIALISING THE POINTER , SO THAT ADDRESS OF VARIABLES CAN BE PASSED.
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2,b=4;
    swap(&a,&b);   // PASSING THE ADDRESS OF THE VARIABLES TO THE FUNCTION
    cout<<a<<" "<<b<<endl;
    return 0;
}