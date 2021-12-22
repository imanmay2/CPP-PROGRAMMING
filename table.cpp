#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a number";
    cin>>n;

    for(i=1;i<=10;i++)
    {
        cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
    }
    return 0;
}
