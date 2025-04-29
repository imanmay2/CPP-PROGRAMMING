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

class Student:public Person{
    public:
    string grade;
    Student(string name,int age,string grade):Person(name,age){
        this->grade=grade;
    }

    void fetchDetails();
};

void Student::fetchDetails(){
    cout<<"Student name: "<<name<<endl;
    cout<<"Student age: "<<age<<endl;
    cout<<"Student grade: "<<grade<<endl;
}

int main(){
    Student s1("Anwesha",20,"A");
    Student s2("Manmay",20,"A");
    s1.fetchDetails();
    s2.fetchDetails();
}