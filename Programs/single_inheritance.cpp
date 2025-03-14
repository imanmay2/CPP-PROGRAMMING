// Testing the single-inheritance. 

#include<iostream>
#include<string>
using namespace std;


class Person{
    protected: 
    string name;
    int age;

    public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};


class Employee:public Person{
    public:
    int emp_id;
    Employee(string name,int age,int emp_id):Person(name,age){
        this->emp_id=emp_id;
    }


    void displayDetails(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Age: "<<age<<endl;
        cout<<"Employee ID: "<<emp_id<<endl;
    }
};


int main(){
    string name;
    int age,id;
    cout<<"Enter Employee Name: ";
    getline(cin,name);
    cout<<"Enter Employee Age: ";
    cin>>age;
    cout<<"Enter Employee id: ";
    cin>>id;
    Employee e1(name,age,id);
    e1.displayDetails();
}