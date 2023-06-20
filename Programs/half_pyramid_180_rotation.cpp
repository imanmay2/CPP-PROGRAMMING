/* half pyramid after 180 degree rotation 
for n=5, print the following pattern

    *
   **
  ***
 ****
*****

*/


#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the no. of rows : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}