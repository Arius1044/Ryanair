#include "Place.h"
#include <string>

Place::Place()
{
	place_number = "nothing";
	check_for_free = 0;
	double price = 0;
}

Place::Place(string _place_number, bool _check_for_free, double _price)
{
	place_number = _place_number;
	check_for_free = _check_for_free;

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
}

double Place::getPrice() const
{
	return price;
}

void Place::setPrice(double _price) {
	price = _price;
}



Place::~Place()
{
}
