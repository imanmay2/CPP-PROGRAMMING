#include<iostream>
#include<string.h>
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
    cout<<"Hello C++\n";
    Student s1=Student("imanmay2");// Explicity
    s1.getData();
    s1.roll=12;
    s1.putData();
}