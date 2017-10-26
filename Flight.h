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

public:
	Flight();
	Flight(Airport _first_airport_, Airport _second_airport_, Plane _plane_, string _time_);
	Airport get_First_airport();
	Airport get_Second_airport();
	string get_Time();
	Plane get_Plane();
	~Flight();
};

