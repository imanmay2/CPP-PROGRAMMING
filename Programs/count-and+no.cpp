///count of +ve and _ve numbers from the numbers ///
#include<iostream>
using namespace std;
int main()
{
    int n,num,i,ne=0,po=0;
    cout<<"Enter the range of the number";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"Enter the number";
        cin>>num;
        if(num<0){
            ne=ne+1;
            }
        else{
            po=po+1;
            
        
        }
    }
    cout<<"The count of positive number and negative number  is"<<po<<" "<<ne;
    return 0;
}