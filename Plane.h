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
	string model;

public:
	Plane();
	Plane(string  _bort_number_);
	void print() const;
	void operator[] (int i) const;
	~Plane();
};