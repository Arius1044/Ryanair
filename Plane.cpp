#include "Plane.h"
#include <fstream>
#include <iostream>

using namespace std;

Plane::Plane()
{
	bort_number = "";
	model = "";
	count = 0;
}
Plane::Plane(string _bort_number_)
{

	bort_number = _bort_number_;

	string path;
	path = _bort_number_ + ".txt";

	ifstream file;
	file.open("Planes\\" + path);

	file >> model;
	int i = 0;
	while (!file.eof())
	{
		string temp;
		bool check;
		file >> temp; file >> check;
		places[i++] = Place(temp, check);
	}
	count = i;
	file.close();
}

void Plane::print() const
{
	cout << "PLANE: " << bort_number << "\n\n";
	cout << "MODEL: " << model << "\n\n";
	cout << "PLACE\t\tSTATUS\n";
	cout << "----------------------\n";
	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << ". "; places[i].print();
	}
}

void Plane::operator[] (int i) const
{
	places[i].check_passenger();
}

bool Plane::get_status() const
{
	return status;
}
string Plane::get_bort_number() const
{
	return bort_number;
}
string Plane::get_model() const
{
	return model;
}
unsigned int Plane::get_count() const
{
	return count;
}

Plane::~Plane()
{
	delete[] places;
}