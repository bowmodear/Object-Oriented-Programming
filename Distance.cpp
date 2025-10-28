#include "Distance.h"
#include<iostream>

Distance::Distance():feet(0),inches(0)
{
}

Distance::Distance(int f, float in):feet(f),inches(in)
{
}

void Distance::print()
{
    std::cout << feet << "f " << inches << "in";
}