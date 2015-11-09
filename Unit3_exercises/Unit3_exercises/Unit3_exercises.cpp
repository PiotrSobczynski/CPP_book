// Book_third_unit.cpp : Defines the entry point for the console application.
// Unit3 - examples..

#include "stdafx.h"

const float centi_to_cal = 2.54f;
const float feet_to_cal = 12.0f;
using namespace std;

int main()
{
	/*
	//First
	float centimeters, feet, cal;
	cout << "Enter height in centimeters\n";
	cin >> centimeters;
	cal = centimeters / centi_to_cal;
	feet = cal / feet_to_cal;
	cout << centimeters << "cm = " << cal << "cal, " << feet << "feets\n";
	cin.get();
	*/
	/*
	//Second
	const float feet_to_inches = 12.0f,
		inches_to_meters = 0.0254f,
		pounds_to_kg = 2.2f;
	float inches, feet2, total_inches, height_meters, weight_pounds,
		weight_kg, bmi;
	cout << "Enter your weight in pounds: ";
	cin >> weight_pounds;
	cout << "Enter your height, enter inches: ";
	cin >> inches;
	cout << "Enter feet: ";
	cin >> feet2;
	total_inches = inches + feet2 * feet_to_inches;
	height_meters = total_inches * inches_to_meters;
	weight_kg = weight_pounds / pounds_to_kg;
	bmi = weight_kg / (height_meters*height_meters);
	cout << "Your BMI  =  " << bmi << endl;
	cin.get();
	cin.get();
	*/
	/*
	//Third
	const float seconds_to_minute = 60.0;
	const float minutes_to_degree = 60.0;
	float degrees, minutes, seconds;
	float overall;
	cout << "Enter degrees: ";
	cin >> degrees;
	cout << "\nEnter minutes: ";
	cin >> minutes;
	cout << "\nEnter seconds: ";
	cin >> seconds;

	overall = degrees + (minutes / minutes_to_degree) + (seconds / seconds_to_minute / minutes_to_degree);

	cout << overall;
	cin.get();
	cin.get();
	*/
	//Fourth
	const int seconds_in_minute = 60;
	const int seconds_in_hour = 3600;
	const int seconds_in_day = 3600 * 24;

	long long seconds_1;
	int days, hours, minutes, sec;
	cout << "Enter number of seconds:";
	cin >> seconds_1;
	days = seconds_1 / seconds_in_day;
	seconds_1 = seconds_1 % seconds_in_day;
	hours = seconds_1 / seconds_in_hour;
	seconds_1 = seconds_1 % seconds_in_hour;
	minutes = seconds_1 / seconds_in_minute;
	seconds_1 = seconds_1 % seconds_in_minute;
	sec = seconds_1;

	cout << days << " dni\n" << hours << " godzin\n" << minutes << " minut\n"
		<< sec << " sekund\n";
	cin.get();
	cin.get();

	//Fifth











	return 0;
}



