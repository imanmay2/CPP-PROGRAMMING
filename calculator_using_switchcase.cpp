#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    float res;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    cout<<"1.Addition"<<endl;
    cout<<"2.Substraction"<<endl;
    cout<<"3.Multiplition"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Please enter your choice from the above lists"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Addition is "<<a+b;
        break;
        case 2:
        cout<<"Substraction is "<<a-b;
        break;
        case 3:
        cout<<"Multiplication is "<<a*b;
        break;
        case 4:
        cout<<"Division is "<<a/b;
        break;
        default:
        cout<<"Please enter the valid choice in between 1-4";
        break;

    }
    return 0;
}