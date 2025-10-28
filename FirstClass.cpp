#include<iostream>
#include"Car.h"
#include<string>
using namespace std;

class Rectangle{
    private:
    double length;
    double width;
    public:
    void setLength(double l){
        if(l>0){length=l;}
        else{cout<<"Error, Length must be positive!";}
    }
    double getLength(){return length;}
    void setWidth(double w){
        if(w>0){width=w;}
        else{cout<<"Error, Width must be positive!";}
    }
    double getWidth(){return width;}
    double getArea(){return length * width;}
};

int main(){
    Rectangle box;
    box.setLength(15.91);
    box.setWidth(81.26);
    cout << "The Length is equal to "<< box.getLength()<<" cm"<< endl;
    cout << "The Width is equal to "<< box.getWidth()<<" cm"<< endl;
    cout << "The area is equal to "<< box.getArea()<<" cm^2"<< endl;
    Car myCar("BMW",2009),c2("Honda",2019);
    myCar.setMaker("BMW");
    myCar.setModel(2009);
    cout << "My car\'s manufacturer is "<<myCar.getMaker()<<endl<<"A random car\'s Manufacturer is " << c2.getMaker() <<endl;
    cout << "My car\'s year model is " << myCar.getModel()<<endl<<"A random car\'s year model is " << c2.getModel() <<endl;
}