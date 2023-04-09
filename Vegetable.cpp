#include "Vegetable.h"

float Vegetable::calcPrice() const
{
	return Farmer::calcPrice() + this->numOfVitimins * 2;
}

//Vegetable type 1 of Farmer
Vegetable::Vegetable() : Farmer(1), numOfVitimins(0)
{
	cout << "How many vitimins it has? " << endl;
	cin >> this->numOfVitimins;

	this->price = calcPrice();
}

Vegetable::Vegetable(int _num) : Farmer(1)
{
	this->numOfVitimins = _num;
	this->price = calcPrice();
}

void Vegetable::print() const
{
	Farmer::print();
	cout << "(" << this->numOfVitimins << ")" << endl;
}
