#include<iostream>
using namespace std;
class Student{
    public: 
    int roll;
    char name[20];
    

    public:
    void getData(){
        cout<<"Enter roll";
        cin>>roll;
        cout<<"Enter name";
        cin>>name;
    }

    void putData(){
        cout<<roll<<'\n';
        cout<<name;
    }
    
};

int main(){
    cout<<"Hello C++\n";
    Student s1;
    s1.getData();
    s1.roll=12;
    s1.putData();
}