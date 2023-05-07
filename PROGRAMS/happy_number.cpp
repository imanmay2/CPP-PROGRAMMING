//Write a program in c++ which will check whether the entered number will be HAPPY NUMNER or not.
#include<iostream>
using namespace std;
int main()
{
    int n,ct=1,p=0,r=0;
    cout<<"Enter the number you want to enter";
    cin>>n;
    if (n>0 && n<10)
    {
        printf("NOT A HAPPY NUMBER");
    }
    else
    {
        while (ct==1)
        {
            int s=0;
            while (n!=0)
            {
                r=n%10;
                s=s+(r*r);
                n=n/10;
            }
            if(s<10)
            {
                p=s;
                ct=0;
            }
            else
            {
                n=s;
            }

            
        }
        if(p==1)
        {
            cout<<"........HAPPY NUMBER......";
        }
        else
        {
            cout<<"Not a happy number";
        }

        
    }
    return 0;
    
}