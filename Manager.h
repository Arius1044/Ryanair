#pragma once
#pragma once
#include "Airport.h"
#include "Passenger.h"
#include "Flight.h"
#include "Plane.h"


class Manager
{
private:
	Plane *planes = new Plane[100];
public:
	Manager();
	void add_plane(string bortnumber);
	void add_flight(Airport _first_airport_, Airport _second_airport_, Plane _plane_, string _time_, bool status);
	void ticket(Plane plane, Flight flight, Place place);
	void help();
	void show_flights();
    ~Manager();
};

