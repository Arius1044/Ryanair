#include "Passenger.h"
#include <string>
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

Passenger::Passenger()
{
	unsigned int i = 0;


	int k = 0;
	int k2 = 0;

	string *rname = new string[101];
	string *sbname = new string[101];

	ifstream file("Generate\\subnames.txt");
	ifstream file_2("Generate\\names.txt");

	while (k!=100) file >> rname[k++];
	while (k2!=100) file_2 >> sbname[k2++];

	name = rname[rand() % k];
	sername = sbname[rand() % k2];
	phonenumber = 380670000000 + rand() % 999 * 10000 + rand() % 7777;
	passport_series = char(90 - rand() % 25) + char(90 - rand() % 25);
	passport_number = (rand() % 9) * 1000 + rand() % 9990;

	file.close();
	file_2.close();

	delete[] rname, sbname;
}

Passenger::Passenger(string _name, string _sername, string _passport_series, unsigned long int _passport_number, unsigned long int _phonenumber)
{
	name = _name;
	sername = _sername;
	passport_series = _passport_series;
	passport_number = _passport_number;
	phonenumber = _phonenumber;
}

string Passenger::getName()const {
	return name;
}
void Passenger::setName(string _name)
{
	name = _name;
}


string Passenger::getSername() const
{
	return sername;
}
void Passenger::setSername(string _sername)
{
	sername = _sername;
}


string Passenger::getPassport_series() const
{
	return passport_series;
}

void Passenger::setPassport_series(string _passport_series)
{
	passport_series = _passport_series;
}

unsigned long int Passenger::getPassport_number() const
{
	return passport_number;
}

void Passenger::setPassport_number(unsigned long int _passport_number)
{
	passport_number = _passport_number;
}


unsigned long int Passenger::getPhonenumber() const
{
	return phonenumber;
}
void Passenger::setPhonenumber(unsigned long int _phonenumber)
{
	phonenumber = _phonenumber;
}


void Passenger::info() const
{
	cout << "\n\nNAME: " << name << endl;
	cout << "SERNAME: " << sername << endl;
	cout << "PASSPORT SERIES: " << passport_series << endl;
	cout << "PASSPORT NUMBER: " << passport_number << endl;
	cout << "PHONE NUMBER: " << phonenumber << endl;
}

Passenger::~Passenger()
{
}

