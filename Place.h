#pragma once
#include <iostream>
#include <string>

class Place {
protected:
	string place_number;
	bool check_for_free;
	double price;
public:
	Place();
	Place(string _place_nubmer, bool _check_for_free, double price);
	string getPlace_number()const;
	void setPlace_nubmer(string _place_number);
	bool getCheck_for_free()const;
	void setCheck_for_free(bool _check_for_free);
	double getPrice()const;
	void setPrice(double _price);
	~Place();

};
