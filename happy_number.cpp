#include<iostream>
using namespace std;
int main()
{
    int n,ct=1,p=0,r=0;
    printf("Enter the number");
    scanf("%d",&n);
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
            printf("IT IS HAPPY NUMBER");
        }
        else
        {
            printf("NOT A HAPPY NUMBER");
        }

        
    }
    return 0;
    
}