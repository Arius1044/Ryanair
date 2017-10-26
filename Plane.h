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
	bool status;

public:
	Plane();
	Plane(string  _bort_number_);
	void print() const;
	void operator[] (int i) const;
	bool get_status() const;
	string get_bort_number() const;
	string get_model() const;
	unsigned int get_count() const;
	~Plane();
};