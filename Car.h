#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
    string maker;
    int model;
    static int count;
    public:
    void setMaker(string m);
    void setModel(int y);
    string getMaker();
    int getModel();
    int getCarsCount();//static int getCarsCount(); Could be called like this"Car::getCarsCount". 
    Car();
    Car(string m,int y);
    ~Car();
};