///program to print the distance between two points using distance formula/// 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double D,x2,x1,y2,y1,x,y;
    cout<<"Enter the coordinates of x";
    cin>>x2>>x1;
    cout<<"Enter the coordinates of y";
    cin>>y2>>y1;
    x=pow((x2-x1),2);
    y=pow((y2-y1),2);
    D=pow((x+y),0.5);
    cout<<"The distance between the two points is as follows"<<D;
    return 0;
}