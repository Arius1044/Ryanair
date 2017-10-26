#include "Passenger.h"
#include <string>
#include <iostream>

Passenger::Passenger()
{
	name = "incognito";
	sername = "unbeknown";
	sex = "unknown";
	phonenumber = 0;
	passport_series = "";
	passport_number = 0;
	nationality = "huy_zna_yuaka";
}

Passenger::Passenger(string _name, string _sername, string _sex, string _passport_series, unsigned long int _passport_number, unsigned long int _phonenumber, string _nationality)
{
	name = _name;
	sername = _sername;
	sex = _sex;
	passport_series = _passport_series;
	passport_number = _passport_number;
	phonenumber = _phonenumber;
	nationality = _nationality;
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


string Passenger::getSex() const
{
	return sex;
}
void Passenger::setSex(string _sex)
{
	sex = _sex;
}

string Passenger::getPassport_series() const
{
	return passport_series;
}

void Passenger::setPassport_series(string _passport_series)
{
	passport_series = _passport_series;
}

string Passenger::getPassport_number() const
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


string Passenger::getNationality() const
{
	return nationality;
}
void Passenger::setNationality(string _nationality)
{
	nationality = _nationality;
}

Passenger::~Passenger()
{
}
