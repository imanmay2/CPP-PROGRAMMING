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
    string emp_id;
    Employee(string emp_id,string name,int age):Person(name,age){
        this->emp_id=emp_id;
    }

    void displayDetails(){
        cout<<"Employee ID : "<<emp_id<<endl;
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Employee Age : "<<age;
    }
};


int main(){
    string name,emp_id;
    int age;
    cout<<"Enter employee ID : ";
    getline(cin,emp_id);
    cout<<"Enter employee name : ";
    getline(cin,name);
    cout<<"Enter the Employee's age : ";
    cin>>age;

    Employee e1(emp_id,name,age);
    e1.displayDetails();
}