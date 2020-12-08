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
	string manufacturer;
	int yearBuilt,
		numDoors,
		towCapacity;

	cout << "Vehicle Program" << endl;;
	cout << "\nVehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	Vehicle vehicle1(manufacturer, yearBuilt);
	vehicle1.displayInfo();

	cout << "\nCar:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter the number of doors: ";
	cin >> numDoors;
	Car car1(numDoors, manufacturer, yearBuilt);
	car1.displayInfo();

	cout << "\nTruck:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter the towing capacity: ";
	cin >> towCapacity;
	Truck truck1(towCapacity, manufacturer, yearBuilt);
	truck1.displayInfo();

	cout << endl << endl;
	system("PAUSE");
	return 0;
}