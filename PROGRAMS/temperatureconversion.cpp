///accept temperature in celcius and convert it into farenheit..///
#include<iostream>
using namespace std;
int main()
{
    int c,f;
    cout<<"enter the temperature in celcius";
    cin>>c;
    f=((9*c)/5)+32;
    cout<<"The temperature in farenheit scale is as follows"<<f;
    return 0;
}