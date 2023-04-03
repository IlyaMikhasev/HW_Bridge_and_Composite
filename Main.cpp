#include <iostream>
#include "Stock.h"
Stock* AccauntingStock(CarCondition* state){
	Stock* hangar = new Stock(state);
	for (size_t i = 0; i < 20; i++)
		hangar->addCar(new CarMazda(state));
	for (size_t i = 0; i < 40; i++)
		hangar->addCar(new CarBMV(state));
	for (size_t i = 0; i < 30; i++)
		hangar->addCar(new CarVolvo(state));
	return hangar;
}
int main() {
	setlocale(LC_ALL, "Russian");
	Stock* HangarNC = new Stock(new NewCar());
	for (size_t i = 0; i < 4; i++)
		HangarNC->addCar(AccauntingStock(new NewCar()));
	std::cout << "Price all new cars = " << HangarNC->getPrice();
	Stock* HangarUC = new Stock(new UsedCar());
	for (size_t i = 0; i < 4; i++)
		HangarUC->addCar(AccauntingStock(new UsedCar()));
	std::cout << "Price all used cars = " << HangarUC->getPrice();
	delete HangarNC;
	delete HangarUC;
	return 0;
}