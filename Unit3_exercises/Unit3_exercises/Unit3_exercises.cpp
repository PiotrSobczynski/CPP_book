// Book_third_unit.cpp : Defines the entry point for the console application.
// Unit3 - examples..

#include "stdafx.h"

const float centi_to_cal = 2.54f;
const float feet_to_cal = 12.0f;
using namespace std;

int main()
{
	//First
	float centimeters, feet, cal;
	cout << "Enter height in centimeters\n";
	cin >> centimeters;
	cal = centimeters / centi_to_cal;
	feet = cal / feet_to_cal;
	cout << centimeters << "cm = " << cal << "cal, " << feet << "feets\n";
	cin.get();
	cin.get();


	//Second

	return 0;
}



