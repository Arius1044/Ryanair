#pragma once
#include <iostream>
#include "Passenger.h"
#include <string>

using namespace std;

class Place {
protected:
	string place_number;
	bool check_for_free;
	Passenger passenger;
public:
	Place();
	Place(string _place_nubmer, bool _check_for_free);
	string getPlace_number()const;
	void setPlace_nubmer(string _place_number);
	bool getCheck_for_free()const;
	void setCheck_for_free(bool _check_for_free);
	void print() const;
	void check_passenger() const;
	~Place();

};

