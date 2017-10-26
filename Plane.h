#pragma once
#include "Place.h"
#include <string>

using namespace std;

class Plane
{
private:

	Place *places = new Place[300];
	unsigned int count;
	string bort_number;

public:
	Plane(string _bort_number_, unsigned int _count_);
	Plane(string  _bort_number_);
	void print() const;
	~Plane();
};

