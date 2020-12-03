/*Patricia Cavendish
* CIS  1202 502
* Due Nov 29, 2020
* December 2, 2020
*/

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"

int main() {
	Vehicle vehicle1;
	Car car1;

	cout << "Vehicle Program" << endl;;
	cout << "\nVehicle:" << endl;
	vehicle1.setManu();
	vehicle1.setYear();
	vehicle1.displayInfo();

	cout << "\nCar:" << endl;
	car1.setManu();
	car1.setYear();
	car1.getNumDoors();

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