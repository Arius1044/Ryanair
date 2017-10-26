#pragma once

#include <string>
#include "Plane.h"
#include "Airport.h"

using namespace std;

class Flight
{
protected:
	Airport first_airport;
	Airport  second_airport;
	string time;
	Plane plane;
	bool status;

public:
	Flight();
	Flight(Airport _first_airport_, Airport _second_airport_, Plane _plane_, string _time_, bool _status_);
	Airport get_First_airport() const;
	Airport get_Second_airport() const;
	string get_Time() const;
	Plane get_Plane() const;
	bool get_status() const;
	void print() const;
	~Flight();
};

