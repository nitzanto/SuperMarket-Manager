#include "Cheese.h"

const float Cheese::calcPrice() const
{
	return Dairy::getPrice() + this->additions;
}

//Type 3 of Dairy
Cheese::Cheese() : Dairy(3), additions(0)
{
	cout << "Please enter how many additions the cheese has: " << endl;
	cin >> this->additions;

	this->price = calcPrice();
}

Cheese::Cheese(int _num) : Dairy(3)
{
	this->additions = _num;
	this->price = calcPrice();
}

void Cheese::print() const
{
	Dairy::print();
	cout << "(" << this->additions << ")" << endl;
}
