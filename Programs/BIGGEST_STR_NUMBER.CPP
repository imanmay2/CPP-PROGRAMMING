//3.  FORM THE BIGGEST NUMBER FROM THE GIVEN STRING NUMBERS. 
// OR, ARRANGE THE STRING IN THE INCREASING ORDER.


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<"THE BIGGEST NUMBER FROM THE STRING IS : "<<endl;
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
    
}