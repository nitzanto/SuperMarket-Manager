#include "Dairy.h"

const float Dairy::calcPrice() const
{
	return (Product::calcPrice() + this->getNumOfColorsP() - this->getFatPercentage()) * this->typeOf_D;
}

Dairy::Dairy(int _typeOfDairy) : Product(), numOfColorsP(0), fatPercentage(0), typeOf_D(_typeOfDairy), name("NA")
{
	cout << "Type of Product: Dairy" << endl;
	cout << "Please enter the number of colors the package has: " << endl;
	cin >> this->numOfColorsP;

	cout << "Enter the percentage of fat in the product: " << endl;
	cin >> this->fatPercentage;

	cout << "Please enter the name of the product: " << endl;
	cin >> this->name;

	this->price = calcPrice();
}

Dairy::Dairy(int _colorsP, int _percentage, int _type, string _name) : Product(), numOfColorsP(_colorsP)
{
	this->fatPercentage = _percentage;
	this->typeOf_D = _type;
	this->name = _name;
	this->price = calcPrice();
}

void Dairy::print() const
{
	Product::print();
	cout << this->getNameOfProduct() << "(" << this->getTypeOf_D() << "," << this->getNumOfColorsP() << this->getAreaStore() << ")" << endl;
}


