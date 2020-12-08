/*Patricia Cavendish
* CIS  1202 502
* Due Nov 29, 2020
* December 2, 2020
*/
#include <iostream>
#include "Car.h"
using namespace std;

Car::Car(int doors, string man, int yr) : Vehicle(man, yr)
{
	numDoors = doors;
}
int Car::getNumDoors()
{
	return numDoors;
}
void Car::setNumDoors()
{
	cout << "Enter the number of doors: ";
	cin >> numDoors;
}
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << getNumDoors() << endl;;
}