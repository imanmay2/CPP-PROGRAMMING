// Friend function.


#include<iostream>
using namespace std;
class test{
    private:
    int marks;

    public:
    test(int marks){
        cout<<"Constructor is called."<<endl;
        this->marks=marks;
    }

    friend void display_marks(test t1);

    ~test(){
        cout<<"Desctructor is called."<<endl;
    }
};

void display_marks(test t1){
    cout<<"Marks you have assigned is : "<<t1.marks<<endl;
}

int main(){
    int marks=98;
    test t1=test(marks);
    display_marks(t1);
}