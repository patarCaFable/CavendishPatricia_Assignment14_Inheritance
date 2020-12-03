#pragma once
using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	Vehicle();
	int getYear();
	void setYear();
	string getManu();
	void setManu();
	void displayInfo();
};