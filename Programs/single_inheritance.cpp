#include<iostream>
#include<string>
using namespace std;

class Person{      //base class
    protected:
    string name;
    int age;

    public:
    void setPerson(string name_,int age_){
        cout<<"Enter name : ";
        cin>>name_;
        name=name_;
        cout<<"Enter age : ";
        cin>>age_;
        age=age_;
    }
};

class Employee:public Person{
    private:
    int id;
    double salary;

    public:
    
    Employee(int id_,double salary_){
        id=id_;
        salary=salary_;
    }

    void displayEmployeeDetails(){
        cout<<"Name of the Employee : "<<name<<endl;
        cout<<"Age of the Employee : "<<age<<endl;
        cout<<"Salary of the Employee : "<< salary<<endl;
        cout<<"Employee ID is : "<<id;
    }
}

int main(){
    Person p1;
    string name;
    cout<<"Name : ";
    cin>>name;
    
}