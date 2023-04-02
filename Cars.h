#pragma once
#include "CarCondition.h"
class Cars
{
public:
	Cars(CarCondition* state) :_state(state) {}
	virtual int getPrice() = 0;
	virtual ~Cars() {}
protected:
	CarCondition* _state;
};
class CarMazda : public Cars {
public:
	CarMazda(CarCondition* state) :Cars(state) {}
	int getPrice()override {
		if (_state->newCar())
			return _price;
		else
			return _price/2;
	}
private:
	int _price =12000;
};
class CarBMV : public Cars {
public:
	CarBMV(CarCondition* state) :Cars(state) {}
	int getPrice()override {
		if (_state->newCar())
			return _price;
		else
			return _price / 2;
	}
private:
	int _price = 15000;
};
class CarVolvo : public Cars {
public:
	CarVolvo(CarCondition* state) :Cars(state) {}
	int getPrice()override {
		if (_state->newCar())
			return _price;
		else
			return _price / 2;
	}
private:
	int _price = 17000;
};


