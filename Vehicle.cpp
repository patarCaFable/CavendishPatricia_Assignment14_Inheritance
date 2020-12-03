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

int main() {
	Vehicle vehicle1;
	Car car1;
	Truck truck1;

	cout << "Vehicle Program" << endl;;
	cout << "\nVehicle:" << endl;
	vehicle1.setManu();
	vehicle1.setYear();
	vehicle1.displayInfo();

	cout << "\nCar:" << endl;
	car1.setManu();
	car1.setYear();
	car1.getNumDoors();
	car1.displayInfo();

	cout << "\nTruck:" << endl;
	truck1.setManu();
	truck1.setYear();
	truck1.getTowCapacity();
	truck1.displayInfo();


	cout << endl << endl;
	system("PAUSE");
	return 0;
}

Vehicle::Vehicle() {
	manufacturer = "";
	year = 0;
}

int Vehicle::getYear()
{
	cout << "Enter the year built: ";
	return year;
}

void Vehicle::setYear()
{
	cin >> year;
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
	cout << "Vehicle Info" << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;
}