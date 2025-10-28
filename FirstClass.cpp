#include<iostream>
#include"Car.h"
#include<string>
#include"calc.h"
#include"Distance.h"

class Rectangle{
    private:
    double length;
    double width;
    public:
    void setLength(double l){
        if(l>0){length=l;}
        else{std::cout<<"Error, Length must be positive!";}
    }
    double getLength(){return length;}
    void setWidth(double w){
        if(w>0){width=w;}
        else{std::cout<<"Error, Width must be positive!";}
    }
    double getWidth(){return width;}
    double getArea(){return length * width;}
};

int main(){
    Rectangle box;
    box.setLength(15.91);
    box.setWidth(81.26);
    std::cout << "The Length is equal to "<< box.getLength()<<" cm"<< endl;
    std::cout << "The Width is equal to "<< box.getWidth()<<" cm"<< endl;
    std::cout << "The area is equal to "<< box.getArea()<<" cm^2"<< endl;
    Car myCar,c2("Toyota",2017),c3;
    myCar.setMaker("BMW");
    myCar.setModel(2009);
    std::cout << "My car\'s manufacturer is "<<myCar.getMaker()<<endl<<"A random car\'s Manufacturer is " << c2.getMaker() <<"\nMy friend\'s car Manufacturer is "<< c3.getMaker()<<endl;
    std::cout << "My car\'s year model is " << myCar.getModel()<<endl<<"A random car\'s year model is " << c2.getModel() <<"\nMy friend\'s car year model is "<< c3.getModel()<<endl;
    calc f1;
    std::cout << "The first version is "<< f1.add(15,7)<<endl;
    std::cout << "The second version is "<< f1.add(15,7,9)<<endl;
    std::cout << "The third version is "<< f1.add(15.7f,7.1f)<<endl;
    std::cout << "The fourth version is "<< f1.add("Hello","World!")<<endl;
    Distance d1,d2(11,6.25f),d3(d2),d4=d2;
    std::cout<<"Distance 1 = ";
    d1.print();
    std::cout<<" Distance 2 = ";
    d2.print();
    std::cout<<" Distance 3 = ";
    d3.print();
    std::cout<<" Distance 4 = ";
    d4.print();
    std::cout<<endl;
}