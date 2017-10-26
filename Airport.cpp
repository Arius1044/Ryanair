#pragma once
#include <iostream>;
#include "Airport.h";
using namespace std;

Airport::Airport() : name("none"), country("none"), city("none")
{
}

Airport::Airport(string _name_, string _country_, string _city_) : name(_name_), country(_country_), city(_city_)
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

void Airport::print_info_airport()const
{
	cout << name << "\t\t" << country << "\t\t" << city << endl;
}

Airport:: ~Airport()
{
}

