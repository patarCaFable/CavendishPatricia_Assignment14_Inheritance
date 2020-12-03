#pragma once
#include "Vehicle.h"
using namespace std;

class Truck :
    public Vehicle
{
private:
    int towCapacity;
public:
    Truck();
    int getTowCapacity();
    void setTowCapacity();
    void displayInfo();
};