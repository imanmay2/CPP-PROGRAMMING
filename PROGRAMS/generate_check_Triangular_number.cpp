// WAP that will check and generate TRIANGULAR NUMBERS :  1,3,6,10,15......n
#include<iostream>
using namespace std;
int check_Triangular(int num){
    int s=0;
    for(int i=1;i<=num;i++){
        s=s+i;
        if(num==s){
            return 1;
            break;
        }
        else if(s>num){
            return 0;
            break;
        }
    }
}
int generate_Triangular(int n){
    cout<<"Triangular number are : ";
    for(int i=1;i<=n;i++){
        cout<<(0.5*(i)*(i+1))<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the range for generating the triangular series : ";
    cin>>n;
    generate_Triangular(n);
    return 0;
}