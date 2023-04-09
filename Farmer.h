#pragma once
#include "Product.h"


//Abstract aswell
class Farmer : public Product {
private:

	int typeOfFarmer; //type of Farmer
	int seasons;
	int suppliers;

protected:
	string productName;

	//Default Constructor //Only members can access this constructor
	Farmer(int _typeOf);
	//User Constructor
	Farmer(int _type, string _productName, int _seasons, int _suppliers);

	virtual float calcPrice() const;

public:

	virtual string getName() const { return this->productName; };
	virtual int getTypeOfFarmer() const { return this->typeOfFarmer; };
	virtual int getSuppliers() const { return this->suppliers; };
	virtual int getSeasons() const { return this->seasons; };

	virtual void setTypeOfFarmer(int num) { this->typeOfFarmer = num; };
	virtual void setSuplliers(int num) { this->suppliers = num; };
	virtual void getSeasons(int num) { this->seasons = num; };

	//Pure virtual method in order to make an abstract class
	virtual void aMethod() = 0;

	virtual void print() const;

	virtual ~Farmer();
};