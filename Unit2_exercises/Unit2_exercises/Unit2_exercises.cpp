// Book_first_unitz.cpp : Defines the entry point for the console application.
// Unit2 - examples

#include "stdafx.h"

using namespace std;

const int days_in_month = 30;
const int miles_to_meters = 1852;

void entliczek_petliczek(void);
void czerwony_stoliczek(void);
void age_to_month(void);
float celc_to_fh(float temp_c);
double years_to_astro(double years);
void time_represent(void);

int main()
{

	//Second ###############
	unsigned int miles;
	cout << "Enter miles number to covert it to meters\n";
	cin >> miles;
	cout << miles << "Miles=" << miles*miles_to_meters << " meters\n";
	cin.get();
	cin.get();
	//Second ###############

	//Third ################
	entliczek_petliczek();
	entliczek_petliczek();
	czerwony_stoliczek();
	czerwony_stoliczek();
	//Third ################

	//Fourth ###############
	age_to_month();
	//Fourth ###############

	//Fifth ################
	float temp_in_c, temp_in_fh;
	cout << "Enter temperature in celcius\n";
	cin >> temp_in_c;
	temp_in_fh = celc_to_fh(temp_in_c);
	cout << temp_in_c << "Celc = " << temp_in_fh << "FH.\n";
	cin.get();
	cin.get();
	//Fifth ################

	//Sixth ################
	double years_astro;
	cout << "Enter number of years\n";
	cin >> years_astro;
	cout << years_astro << " years= " << years_to_astro(years_astro);
	cin.get();
	cin.get();
	//Sixth ################

	//Seventh ##############
	time_represent();
	//Seventh ##############

	return 0;
}

void entliczek_petliczek(void)
{
	cout << "Entliczek petliczek\n";
}

void czerwony_stoliczek(void)
{
	cout << "Czerwony stoliczek\n";
}
void age_to_month(void)
{
	unsigned int age_years;
	cout << "Enter your age in years\n";
	cin >> age_years;
	cout << "Your age in months = " << age_years*days_in_month << endl;
	cin.get();
	cin.get();

}

float celc_to_fh(float temp_c)
{
	float fh_temp;
	fh_temp = 1.8f * temp_c + 32.0f;
	return fh_temp;
}

double years_to_astro(double years)
{
	double astronomic;
	return astronomic = 63240 * years;
}
void time_represent(void)
{
	int minutes, hours;
	cout << "Enter an hour\n";
	cin >> hours;
	cout << "Enter minutes\n";
	cin >> minutes;
	cout << hours << ":" << minutes;
	cin.get();
	cin.get();
}