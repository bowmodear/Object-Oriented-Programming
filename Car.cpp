#include"Car.h"
#include<string>
using namespace std;

int Car::count = 0;

void Car::setMaker(string m){
    maker = m;
}

void Car::setModel(int y)
{
    model = y;
}

string Car::getMaker()
{
    return maker;
}

int Car::getModel()
{
    return model;
}

int Car::getCarsCount()
{
    return count;
}

Car::Car():maker("Honda"),model(2019)
{
    count++;
}

Car::Car(string m,int y):maker(m),model(y)
{
    count++;
}

Car::~Car()
{
    count--;
}
