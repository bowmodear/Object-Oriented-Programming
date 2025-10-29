#include "Distance.h"
#include<iostream>

Distance::Distance():feet(0),inches(0)
{
}

Distance::Distance(int f, float in):feet(f),inches(in)
{
}

Distance::Distance(const Distance & obj):feet{obj.feet},inches{obj.inches}
{
}

Distance Distance::addDistance(Distance d2)
{
    Distance re;
    re.feet = feet +d2.feet;
    re.inches = inches + d2.inches;
    return re;
}

std::string Distance::print()
{
    return "Feet = "+ std::to_string(feet) + "f \t Inches = " + std::to_string(inches) + "in";
}