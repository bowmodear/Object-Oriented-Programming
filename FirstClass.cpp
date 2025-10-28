#include<iostream>
#include"Car.h"
#include<string>
#include"calc.h"
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
    Car myCar,c2("Toyota",2017),c3;
    myCar.setMaker("BMW");
    myCar.setModel(2009);
    cout << "My car\'s manufacturer is "<<myCar.getMaker()<<endl<<"A random car\'s Manufacturer is " << c2.getMaker() <<"\nMy friend\'s car Manufacturer is "<< c3.getMaker()<<endl;
    cout << "My car\'s year model is " << myCar.getModel()<<endl<<"A random car\'s year model is " << c2.getModel() <<"\nMy friend\'s car year model is "<< c3.getModel()<<endl;
    calc f1;
    cout << "The first version is "<< f1.add(15,7)<<endl;
    cout << "The second version is "<< f1.add(15,7,9)<<endl;
    cout << "The third version is "<< f1.add(15.7f,7.1f)<<endl;
    cout << "The fourth version is "<< f1.add("Hello","World!")<<endl;
}