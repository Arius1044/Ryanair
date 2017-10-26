#include <iostream>;
#include "Flights.h";
using namespace std;

Flights::Flights() : start("incognito"), finish("incognito")
{
}

Flights::Flights(string _start_, string _finish_) : start(_start_), finish(_finish_)
{
}

void Flights::set_Flights_start(string _start_)
{
	start.assign(_start_);
}

void Flights::set_Flights_finish(string _finish_)
{
	finish.assign(_finish_);
}

string Flights::get_Flights_start()const
{
	return start;
}

string Flights::get_Flights_finish()const
{
	return finish;
}


void Flights::print_info_flights()const
{
	cout << start << "-" << finish<< " " << endl;
}

Flights:: ~Flights()
{
}
