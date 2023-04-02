#pragma once
#include "Cars.h"
#include <vector>
class Stock : public Cars
{
public:
	Stock(CarCondition* state) :Cars(state) {}
	int getPrice() {
		int totalcost = 0;
		for (size_t i = 0; i < _stok.size(); i++)
			totalcost += _stok[i]->getPrice();
		return totalcost;
	}
	void addCar(Cars* car) {
		_stok.push_back(car);
	}
	~Stock() {
		for (size_t i = 0; i < _stok.size(); i++)
			delete _stok[i];
	}
private:
	std::vector<Cars*> _stok;

};


