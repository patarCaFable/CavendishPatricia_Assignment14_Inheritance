/*Patricia Cavendish
* CIS  1202 502
* Due Nov 29, 2020
* December 2, 2020
*/

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

Vehicle::Vehicle(string man, int yr) {
	manufacturer = man;
	yearBuilt = yr;
}

int Vehicle::getYear()
{
	return yearBuilt;
}

void Vehicle::setYear()
{
	cout << "Enter the year built: ";
	cin >> yearBuilt;
}

string Vehicle::getManu()
{
	return manufacturer;
}

void Vehicle::setManu()
{
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
}

void Vehicle::displayInfo()
{
	cout << "Vehicle Info:" << endl;
	cout << "Manufacturer: " << getManu() << endl;
	cout << "Year Built: " << getYear() << endl;
}