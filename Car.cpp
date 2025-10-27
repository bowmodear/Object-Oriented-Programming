#include"Car.h"
#include<string>
using namespace std;

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