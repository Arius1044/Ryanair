#include "Place.h"
#include <string>

using namespace std;

Place::Place()
{
	place_number = "nothing";
	check_for_free = 0;
}

Place::Place(string _place_number, bool _check_for_free)
{
	place_number = _place_number;
	check_for_free = _check_for_free;
	if (check_for_free) passenger = Passenger();
}

string Place::getPlace_number() const
{
	return place_number;
}

void Place::setPlace_nubmer(string _place_number)
{
	place_number = _place_number;
}

bool Place::getCheck_for_free() const
{
	return check_for_free;
}

void Place::setCheck_for_free(bool _check_for_free)
{
	check_for_free = _check_for_free;
	if (check_for_free) passenger = Passenger();
}

void Place::check_passenger() const
{
	if (check_for_free) passenger.info();
	else cout << "\n\nEMPTY\n\n";
}

void Place::print() const
{
	cout << place_number << "\t";
	if (check_for_free) cout << "free" << endl;
	else cout << "not free" << endl;
}


Place::~Place()
{
}