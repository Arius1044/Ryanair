#pragma once
#include <iostream>;
#include "Airport.h";
using namespace std;

Airport::Airport() : name("incognito"), country("incognito"), city("incognito"), contact_number(0)
{
}

Airport::Airport(string _name_, string _country_, string _city_, long long  _contact_number_) : name(_name_), country(_country_), city(_city_), contact_number(_contact_number_)
{
}

void Airport::set_Airport_name(string _name_)
{
	name = _name_;
}

void Airport::set_Airport_country(string _country_)
{
	country = _country_;
}

void Airport::set_Airport_city(string _city_)
{
	city = _city_;
}

void Airport::set_Airport_contact_number(long long _contact_number_)
{
	contact_number = _contact_number_;
}

string Airport::get_Airport_name()const
{
	return name;
}

string Airport::get_Airport_country()const
{
	return country;
}

string Airport::get_Airport_city()const
{
	return city;
}

long long Airport::get_Airport_contact_number()const
{
	return contact_number;
}

void Airport::print_info_airport()const
{
	cout << name << "\t\t" << country << "\t\t" << city << "\t\t" << contact_number << endl;
}

Airport:: ~Airport()
{
}

