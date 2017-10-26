#pragma once
#include "Flight.h"

using namespace std;

Flight::Flight()
{
	first_airport = Airport();
	second_airport = Airport();
	plane = Plane();
	time = "";
}

Flight::Flight(Airport _first_airport_, Airport _second_airport_, Plane _plane_, string _time_)
{
	first_airport = _first_airport_;
	second_airport = _second_airport_;
	plane = _plane_;
	time = _time_;
}


Airport Flight::get_First_airport()
{
	return first_airport;
}
Airport Flight::get_Second_airport()
{
	return second_airport;
}
string Flight::get_Time()
{
	return time;
}
Plane  Flight::get_Plane()
{
	return plane;
}

Flight::~Flight()
{
}
