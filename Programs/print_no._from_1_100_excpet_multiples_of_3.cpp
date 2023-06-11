//WAP that will print numbers from 1 to 100, except the multiple of 3



#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"The numbers from 1 to 100 : ";
    for(i=1;1<=100;i++){
       if(i%3!=0)
       cout<<i<<endl;
    }
    return 0;
}