#pragma once
#include "Vehicle.h"
using namespace std;

class Car :
    public Vehicle
{
private:
    int numDoors;
public:
    Car();
    int getNumDoors();
    void setNumDoors();
    void displayInfo();
};