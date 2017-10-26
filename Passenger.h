#pragma once
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Passenger
{
protected:
	string name;
	string sername;
	string passport_series;
	unsigned long int passport_number;
	unsigned long int phonenumber;

public:
	Passenger();
	Passenger(string _name, string _sername, string _passport_series, unsigned long int _passport_number, unsigned long int _phonenumber);

	string getName()const;
	void setName(string _name);

	string getSername()const;
	void setSername(string _sername);

	string getPassport_series()const;
	void setPassport_series(string _passport_series);

	unsigned long int getPassport_number()const;
	void setPassport_number(unsigned long int _passport_number);

	unsigned long int getPhonenumber()const;
	void setPhonenumber(unsigned long int _phonenumber);

	void info() const;

	~Passenger();


};


