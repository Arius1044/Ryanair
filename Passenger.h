#pragma once
#include <iostream>
#include <string>
class Passenger {
protected:
	string name;
	string sername;
	string sex;
	string passport_series;
	unsigned long int passport_number;
	unsigned long int phonenumber;
	string nationality;
public:
	Passenger();
	Passenger(string _name, string _sername, string _sex, string _passport_series, unsigned long int _passport_number, unsigned long int _phonenumber, string _nationality);
	
	string getName()const;
	void setName(string _name);

	string getSername()const;
	void setSername(string _sername);

	string getSex()const;
	void setSex(string _sex);

	string getPassport_series()const;
	void setPassport_series(string _passport_series);

	string getPassport_number()const;
	void setPassport_number(unsigned long int _passport_number);

	unsigned long int getPhonenumber()const;
	void setPhonenumber(unsigned long int _phonenumber);

	string getNationality()const;
	void setNationality(string _nationality);

	~Passenger();


};
