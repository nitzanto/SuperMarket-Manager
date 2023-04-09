#include "Farmer.h"


Farmer::Farmer(int _typeOf) : Product(), typeOfFarmer(_typeOf), productName("NA"), seasons(0), suppliers(0)
{
	cout << "Please enter the product name " << endl;
	cin >> this->productName;

	cout << "Please enter how many seasons the farmer product has been grown " << endl;
	cin >> this->seasons;

	cout << "Please enter how many suppliers grow the product " << endl;
	cin >> this->suppliers;

	this->price = calcPrice();
}

Farmer::Farmer(int _type, string _productName, int _seasons, int _suppliers)
{
	this->typeOfFarmer = _type;
	this->productName = _productName;
	this->seasons = _seasons;
	this->suppliers = _suppliers;
}

void Farmer::print() const
{
	Product::print();
	cout << this->getName() << " " << "(" << this->getTypeOfFarmer()
		<< "," << this->getSuppliers() << "," << this->getSeasons() << ") ";
}

Farmer::~Farmer()
{
}


float Farmer::calcPrice() const
{
	return Product::calcPrice() * 3 * (5 - this->seasons) + (this->suppliers * 5) + this->typeOfFarmer;
}



