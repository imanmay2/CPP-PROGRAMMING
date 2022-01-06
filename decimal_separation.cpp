#include<iostream>
using namespace std;
int main()
{
    float num,deci;
    int x;
    printf("Enter the number you want to enter");
    scanf("%f",&num);
    x=num/1;
    deci=num-x;
    printf("Integer part of the floating number is %d",x);
    printf("Decimal number after separating is %f",deci);
    return 0;
}