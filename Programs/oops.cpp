#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student{
    // Student(string username){
    //     cout<<"Welcome\n"<<username;
    // }
    public: 
    int roll;
    string name;
    

    public:
    Student(string username){
        cout<<"Welcome "<<username;
    }
    
    void getData(){
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
    }

    void putData(){
        cout<<roll<<'\n';
        cout<<name;
    }
    
};

int main(){
    
    float num=5.6787;
    cout<<fixed<<setprecision(2)<<num;
}