#pragma once
#include "Product.h"

class Dairy : public Product
{
private:
	int numOfColorsP; // num of colors in package
	int fatPercentage;
	int typeOf_D;

	virtual const float calcPrice() const;


protected:
	string name;

	//Default Constructor
	Dairy(int _typeOfDairy);

	//Paramters Constructor
	Dairy(int _colorsP, int _percentage, int _type, string _name);


public:

	const int getNumOfColorsP() const { return this->numOfColorsP; };
	const int getFatPercentage() const { return this->fatPercentage; };
	const int getTypeOf_D() const { return this->typeOf_D; };
	const string getNameOfProduct() const { return this->name; };

	//Abstract Class
	virtual void aMethod() = 0;

	virtual void print() const;

	~Dairy() {};
};

