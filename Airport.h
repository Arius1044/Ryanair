#pragma once
#include <string>
using namespace std;

class Airport
{
private:
	string name;
	string country;
	string city;

public:
	Airport();
	Airport(string _name_, string _country_, string _city_);

	void set_Airport_name(string _name_);
	void set_Airport_country(string _country_);
	void set_Airport_city(string _city_);

	string get_Airport_name()const;
	string get_Airport_country()const;
	string get_Airport_city()const;

	void print_info_airport()const;
	~Airport();
};


