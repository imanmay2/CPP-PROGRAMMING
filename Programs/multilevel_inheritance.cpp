#include<iostream>
using namespace std;

class Shape{
    protected: 
    double length,width;

    public:
    Shape(double length,double width){
        this->length=length;
        this->width=width;
    }

    void displayDimensions(){
        cout<<"Length: "<<length<<" width: "<<width<<endl;
    }
};

class Rectangle:public Shape{
    protected:
    double length,width;

    public:
    Rectangle(double length,double width):Shape(length,width){
        this->length=length;
        this->width=width;
    }

    void calculateArea(){
        cout<<"Area of the Rectangle : "<<length*width<<endl;
    }
};


class Cuboid:public Rectangle{
    protected:
    double length,width,height;

    public:
    Cuboid(double length,double width,double height):Rectangle(length,width){
        this->length=length;
        this->width=width;
        this->height=height;
    }


    void calculationVolume(){
        cout<<"Volume of the Cuboid : "<<length*width*height<<endl;
    }
};


int main(){
    double length,width,height;
    cout<<"Enter Length : ";
    cin>>length;
    cout<<"Enter Width : ";
    cin>>width;
    cout<<"Enter Height : ";
    cin>>height;

    Cuboid c1(length,width,height);
    c1.displayDimensions();
    c1.calculateArea();
    c1.calculationVolume();
}