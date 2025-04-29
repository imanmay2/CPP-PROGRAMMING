#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};

class Employee:virtual public Person{
    public:
    string emp_id,dept;
    Employee(string name,int age,string emp_id,string dept):Person(name,age){
        this->emp_id=emp_id;
        this->dept=dept;
    }
};

class Student:virtual public Person{
    public:
    int roll;
    string course;

    Student(string name,int age,int roll,string course):Person(name,age){
        this->roll=roll;
        this->course=course;
    }
};


class Intern:public Employee,public Student{
    public:
    double duration;
    Intern(string name,int age,string emp_id,string dept,int roll,string course,double duration):Person(name,age),Employee(name,age,emp_id,dept),Student(name,age,roll,course){
        this->duration=duration;
    }

    void showDetails();
};


void Intern::showDetails(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Employee Id: "<<emp_id<<endl;
    cout<<"Department: "<<dept<<endl;
    cout<<"Roll: "<<roll<<endl;
    cout<<"Course: "<<course<<endl;
    cout<<"Duration of work: "<<duration<<endl;
}


int main(){
    Intern i1("Anwesha",20,"A001","ECE",1,"Java",5.0);
    i1.showDetails();

}