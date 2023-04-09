#pragma once
#include "Product.h"

//Include milk..

class Package : public Product {

private:

	int numOfProducts;
	int color;
	string n;
	vector<string> names;

	virtual const float calcPrice() const;

public:

	//Default Constructor
	Package();

	virtual ~Package();

	const int getNumOfProducts() const { return this->numOfProducts; };
	const int getNumOfColors() const { return this->color; };

	void setNumOfProducts(int num) { this->numOfProducts = num; };
	void setNumOfColors(int num) { this->color = num; };

	virtual void aMethod() {};

	virtual void print() const override;
};



