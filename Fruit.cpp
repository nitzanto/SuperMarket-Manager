#include "Fruit.h"

float Fruit::calcPrice() const
{
	return Farmer::calcPrice() + this->amountOfSugar / 2;
}

//Fruit Type 2 of Farmer
Fruit::Fruit() : Farmer(2), amountOfSugar(0)
{
	cout << "How many sugar this product has? " << endl;
	cin >> this->amountOfSugar;

	this->price = calcPrice();
}

Fruit::Fruit(int _num) : Farmer(2)
{
	this->amountOfSugar = _num;
	this->price = calcPrice();
}

Fruit::~Fruit()
{
}

void Fruit::print() const
{
	Farmer::print();
	cout << "(" << this->amountOfSugar << ")" << endl;
}
