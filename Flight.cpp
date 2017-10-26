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

Flight::Flight(Airport _first_airport_, Airport _second_airport_, Plane _plane_, string _time_, bool _status_)
{
	first_airport = _first_airport_;
	second_airport = _second_airport_;
	plane = _plane_;
	time = _time_;
	status = _status_;
}


Airport Flight::get_First_airport() const
{
	return first_airport;
}
Airport Flight::get_Second_airport() const
{
	return second_airport;
}
string Flight::get_Time() const
{
	return time;
}
Plane  Flight::get_Plane() const
{
	return plane;
}

bool Flight::get_status() const
{
	return status;
}

void Flight::print() const
{
	cout << plane.get_bort_number<<"\t\t"<< first_airport.get_Airport_city<<"\t—\t"<<second_airport.get_Airport_city << "\t\t"<<time<<"\t\t";
	if (status) cout << "Finished" << endl;
	else cout << "Unacted" << endl;
}

Flight::~Flight()
{
}
