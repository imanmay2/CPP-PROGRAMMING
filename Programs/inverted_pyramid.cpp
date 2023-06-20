/*   for n=5 , print the following inverted pyramid pattern
*****
****
***
**
*
*/




#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the no. of rows :  ";
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}