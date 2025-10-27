#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
    string maker;
    int model;
    public:
    void setMaker(string m);
    void setModel(int y);
    string getMaker();
    int getModel();
};