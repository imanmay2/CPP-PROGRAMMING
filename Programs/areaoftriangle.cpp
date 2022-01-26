///accept three sides of triangle and display the area of a triangle///
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int s,a,b,c,A;
    cout<<"enter the three sides of the triangle";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    A=pow((s*(s-a)*(s-b)*(s-c)),0.5);
    cout<<"The area of the triangle is as follows"<<A;
    return 0;

}