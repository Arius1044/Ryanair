#pragma once
#include <string>
using namespace std;

class Flights
{
private:
	string start;
	string finish;
public:
	Flights();
	Flights(string _start_, string _finish_);

	void set_Flights_start(string _start_);
	void set_Flights_finish(string _finish_);

	string get_Flights_start()const;
	string get_Flights_finish()const;

	void print_info_flights()const;
	~Flights();
};
