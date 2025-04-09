#include<iostream>
#include<string>
using namespace std;

class Graduate{
    public:
    string name;
    int roll;
    virtual void inputGrades()=0;
    virtual void calculateGrades()=0;
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
    }

    virtual ~Graduate(){}
};

class UG:public Graduate{
    public:

    int grade1,grade2;
    void inputGrades() override{
        cout<<"Enter Grade1: ";
        cin>>grade1;
        cout<<"Enter Grade2: ";
        cin>>grade2;
    }

    void calculateGrades() override{
        cout<<"Calculate Grades are : "<<(grade1+grade2)*0.5<<endl;
    }
};


class PG:public Graduate{
    public:

    int grade1,grade2;
    void inputGrades() override{
        cout<<"Enter Grade1: ";
        cin>>grade1;
        cout<<"Enter Grade2: ";
        cin>>grade2;
    }

    void calculateGrades() override{
        cout<<"Calculate Grades are : "<<(grade1+grade2)*0.5<<endl;
    }
};



int main(){
    string name;
    int roll;
    char type;

    cout<<"Enter the name: ";
    cin.ignore();
    getline(cin,name);

    cout<<"Enter Roll: ";
    cin>>roll;

    cout<<"Enter type : ";
    cin>>type;

    Graduate *s1=nullptr;

    if(type=='U' || type=='u'){
        s1=new UG();
    } else if(type=='P' || type=='p'){
        s1=new PG();
    }

    s1->name=name;
    s1->roll=roll;

    s1->display();
    s1->inputGrades();
    s1->calculateGrades();

    delete s1;
}