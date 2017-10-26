#pragma once
#include <string>
using namespace std;

class Airport
{
private:
	string name;
	string country;
	string city;
	string contact_number;
public:
	Airport();
	Airport(string _name_, string _country_, string _city_, string _contact_number_);

	void set_Airport_name(string _name_);
	void set_Airport_country(string _country_);
	void set_Airport_city(string _city_);
	void set_Airport_contact_number(string _contact_number_);

	string get_Airport_name()const;
	string get_Airport_country()const;
	string get_Airport_city()const;
	string get_Airport_contact_number()const;

	void print_info_airport()const;
	~Airport();
};
