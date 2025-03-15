#include<iostream>
#include<string>
using namespace std;


class Engine{
    protected:
    double horsePower;
    string fuelType;

    public:
    Engine(double horsePower,string fuelType){
        this->horsePower=horsePower;
        this->fuelType=fuelType;
    }


    void displayEngine(){
        cout<<"HorsePower : "<<horsePower<<endl;
        cout<<"fuelType : "<<fuelType<<endl;
    }
};

class Wheels{
    protected:
    int numWheels;
    string wheelType;

    public:
    Wheels(int numWheels,string wheelType){
        this->numWheels=numWheels;
        this->wheelType=wheelType;
    }

    void displayWheels(){
        cout<<"Number of Wheels : "<<numWheels<<endl;
        cout<<"Wheel Type : "<<wheelType<<endl;

    }
};

class Car:public Engine,Wheels{
    protected:
    string brand;

    public:
    Car(string brand,double horsePower,string fuelType,int numWheels,string wheelType):Engine(horsePower,fuelType),Wheels(numWheels,wheelType){
        this->brand=brand;
    }

    void displayCar(){
        cout<<"____Car details____"<<endl;
        cout<<"Brand : "<<brand<<endl;
        displayEngine();
        displayWheels();
    }
};

void getInput(string &brand,double &horsePower,string &fuelType,int &numWheels,string &wheelType){
    cout<<"Enter Car brand : ";
    getline(cin,brand);
    cout<<"Enter the HorsePower : ";
    cin>>horsePower;
    cout<<"Enter the fuel type : ";
    cin.ignore();
    getline(cin,fuelType);
    cout<<"Enter the number of wheels : ";
    cin>>numWheels;
    cout<<"Enter the wheelType : ";
    cin.ignore();
    getline(cin,wheelType);
}

int main(){
    string brand;
    double horsePower;
    string fuelType;
    int numWheels;
    string wheelType;
    getInput(brand,horsePower,fuelType,numWheels,wheelType);
    Car c1(brand,horsePower,fuelType,numWheels,wheelType);
    c1.displayCar();
}