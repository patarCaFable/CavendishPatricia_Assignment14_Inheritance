#pragma once
using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle(string man, int yr);
	int getYear();
	void setYear();
	string getManu();
	void setManu();
	void displayInfo();
};