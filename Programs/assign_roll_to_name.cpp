// WAP that will assign roll no. to student name.
//DUE.....YET TO BE DONE....(GOOD QUESTION)

#include<iostream>
using namespace std;
int main(){
    int n;
    string name;
    cout<<"Enter the number of Inputs : ";
    cin>>n;
    string arr_names[n];

    //taking names as inputs and pushing into the array.
    for(int i=0;i<n;i++){
        cout<<"Enter the name of the student: ";
        cin>>arr_names[i];
    }

    
return 0;
}