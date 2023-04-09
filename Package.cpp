#include "Package.h"

Package::Package() : Product(), numOfProducts(0), color(0)
{
	cout << "Please enter how many products the package has: " << endl;
	cin >> this->numOfProducts;

	cout << "How many colors the package has? " << endl;
	cin >> this->color;

	for (int i = 0; i < this->getNumOfProducts(); i++)
	{
		cout << "Please enter a name for the " << i << " product" << endl;
		cin >> n;

		this->names.push_back(n);
	}

	this->price = calcPrice();
}


const float Package::calcPrice() const
{
	return ((Product::calcPrice() * 2) * this->getNumOfProducts()) + (this->getNumOfColors() / 3);
}


void Package::print() const
{
	Product::print();

	for (int i = 0; i < this->getNumOfProducts(); i++)
	{
		if (i != this->getNumOfProducts() - 1)
			cout << names[i] << ", ";
		else
			cout << names[i];
	}

	cout << "(" << this->getNumOfProducts() << "," << this->getNumOfColors() << ")" << endl;
}

Package::~Package()
{
}



