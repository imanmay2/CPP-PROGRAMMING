// WAP THAT WILL ACCESS THE ELEMENTS OF THE ARRAY USING POINTERS.
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    // cout<<*arr<<endl;  de-referencing the first value of the array.
    int *ptr =arr;
    for(int i=0;i<4;i++){
         cout<<*ptr<<endl;
        //cout<<*(arr+i)<<endl;   // we may write this statement instead of the previous statement
        ptr++;
    }
    return 0;
}