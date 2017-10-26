#include "Plane.h"
#include <fstream>
#include <iostream>

using namespace std;

Plane::Plane(string _bort_number_, unsigned int _count_) 
{

	bort_number.assign(_bort_number_);
	count = _count_;


	for (int i = 0; i < count; i++)
	{
		if (i <= 10)
		{
			string pl = "VIP_";
			pl += (i + 1);
			places[i] = Place(pl, 1);
		}
		else 
		{
			string pl = "STD_";
			pl += (i + 1);
			places[i] = Place(pl, 1);
		}
	}

}
Plane::Plane(string _bort_number_)
{

	bort_number = _bort_number_;

	string path;
	path.assign(_bort_number_ + ".txt");

	ifstream file;
	file.open("Planes\\"+path);

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
	cout << "PLANE: "<< bort_number<<"\n\n";
	cout << "PLACE\tSTATUS\n";
	cout << "----------------------\n";
	for (int i = 0; i < count; i++)
	{
		places[i].print();
	}
}

Plane::~Plane()
{
	delete[] places;
}
