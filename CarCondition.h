#pragma once
class CarCondition
{
public:
	CarCondition() {}
	virtual ~CarCondition() {}
	virtual bool newCar() = 0;
};
class NewCar :public CarCondition {
public:
	NewCar() {}
	virtual ~NewCar() {}
	bool newCar()override {
		return true;
	}
};
class UsedCar :public CarCondition {
public:
	UsedCar() {}
	virtual ~UsedCar() {}
	bool newCar()override {
		return false;
	}
};
