#pragma once
#include "Product.h"
#include "Vegetable.h"
#include "Fruit.h"
#include "Yogurt.h"
#include "Package.h"
#include "Dairy.h"
#include "Cheese.h"
#include "Beverage.h"
#include "OtherDairy.h"
#include "Farmer.h"

class Supermarket
{
private:
	string name;
	int factorCommerical;
	int numOfProducts;

	vector <Product*> store;

	const float getPriceOfAllProducts();

public:

	Supermarket();

	//Paremeters C'tor
	Supermarket(string _name, int _factor, int _numOfProducts);

	const int getNumOfProducts() const { return this->numOfProducts; };
	const int getFactorCommerical() const { return this->factorCommerical; };
	const string getNameOfStore() const { return this->name; };

	void setNumOfProducts(int _num) { this->numOfProducts = _num; };
	const void setFactorCommerical(int _num) { this->factorCommerical = _num; };
	const void setNameOfStore(string _name) { this->name = _name; };

	void insertProduct(Product* other);
	const bool isSerialKey(const int serialKey, const int index) const;

	void printStore();
	void menu();

	virtual ~Supermarket();
};

