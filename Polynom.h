#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Polynom
{
    string name;
public:
    Polynom(string n = "ABCD")
    {
        name = n;
    }
    string getName() { return name; }
};
