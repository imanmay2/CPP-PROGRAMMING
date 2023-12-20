#include<iostream>
using namespace std;
int main(){
    int ch;
    int n;
    cout<<"*********WELCOME TO THE STACK OPERATION IN C++ ******"<<endl;
    cout<<"1. **PUSH** "<<endl;
    cout<<"2. **POP**"<<endl;
    cout<<"3. **DISPLAY**"<<endl;
    cout<<"4. **EXIT**"<<endl;
    cout<<"         "<<endl;
    cout<<"Enter the Maximum range of the array : "<<endl;
    cin>>n;
    int arr[n];
    int ct=0;
    while (true) {
        cout<<"Enter your choice : ";
        cin>>ch;
        cout<<"         "<<endl;
        if(ch==1){
            int num;
            cout<<"How many numbers will you want to push : "<<endl;
            cin>>num;
            if(n>num){
                for(int i=0;i<num;i++){
                    ct++;
                    cout<<"Enter the number : "<<endl;
                    cin>>arr[i];
            }
            }
            else if(n<num){
                cout<<"ARRAY LENGTH EXCEEDED !! PLEASE TRY TO GIVE LESS THAN OR EQUAL TO ARRAY LENGTH"<<endl;
            }
            
        }
        else if(ch==2){

            // yet to be done .
            
        }
        else if(ch==3){
            cout<<"STACK IS AS FOLLOWS : "<<endl;
            for(int i=0;i<ct;i++){
                cout<<arr[i]<<endl;
            }
        }
        else if(ch==4){
            cout<<"PROGRAM TERMINATED !! BYE !!   :)  :)";
            break;
        }
    }
}

