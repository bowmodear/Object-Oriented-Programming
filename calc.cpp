#include "calc.h"
using namespace std;
calc::calc(){}
calc calc::createObj()
{
    calc obj;
    return obj;
}
int calc::add(int num1, int num2)
{
    return num1 +num2;
}

int calc::add(int num1, int num2, int num3)
{
    return num1 + num2 +num3;
}

float calc::add(float num1, float num2)
{
    return num1 +num2;
}

string calc::add(string a, string b)
{
    return a + " "+b;
}

int calc::mult(int num1, int num2)
{
    return num1 * num2;
}

int calc::sub(int num1, int num2)
{
    return num1 - num2;
}
