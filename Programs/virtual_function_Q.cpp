#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    virtual void inpGrades()=0;
    virtual void calcGrades()=0;
    void inp(){
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter roll: ";
        cin>>roll;
    }

    virtual ~Student(){}
};

class UG:public Student{
    public:
    int mid,final;
    void inpGrades() override{
        cout<<"Enter the Grade for UG: ";
        cin>>mid>>final;
    }

    void calcGrades() override{
        int total=(mid+final)/2;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Marks : "<<total<<endl;
    }
};

class PG:public Student{
    public:
    int mid,final;
    void inpGrades() override{
        cout<<"Enter the Grade for PG: ";
        cin>>mid>>final;
    }

    void calcGrades() override{
        int total=(mid+final)/2;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Marks : "<<total<<endl;
    }
};

int main(){
    
    char type;
    
    cout<<"Enter Type: ";
    cin>>type;
    
    Student *s;
    if(type=='U'){
        s=new UG();
    } else if(type=='P')
    {
        s=new PG();
    }

    s->inp();
    s->inpGrades();
    s->calcGrades();

    delete s;
}