/*Patricia Cavendish
* CIS  1202 502
* Due Nov 29, 2020
* December 2, 2020
*/

#include <iostream>
#include "Truck.h"
using namespace std;

Truck::Truck()
{
	towCapacity = 0;
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
	cout << "Towing Capacity: " << towCapacity << endl;
}