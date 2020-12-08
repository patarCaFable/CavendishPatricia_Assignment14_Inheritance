/*Patricia Cavendish
* CIS  1202 502
* Due Nov 29, 2020
* December 2, 2020
*/

#include <iostream>
#include "Truck.h"
using namespace std;

Truck::Truck(int tow, string man, int yr) : Vehicle(man, yr)
{
	towCapacity = tow;
}
int Truck::getTowCapacity()
{
	return towCapacity;
}

void Truck::setTowCapacity()
{
	cout << "Enter the towing capacity: ";
	cin >> towCapacity;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowCapacity() << endl;
}