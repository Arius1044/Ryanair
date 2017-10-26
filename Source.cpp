#include <iostream>
#include "Plane.h";
#include "Passenger.h";
#include "Airport.h";
#include "Flight.h";
#include <time.h>
using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ukr");
	Plane plane("L14");
	plane.print();
	system("pause");
	return 0;
}