#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Product
{
private:

	int serialNumber; //Unique serial number
	char row; //Row Location
	int shelf; //Shelf number

protected:
	//Protected Constructor in order to not create objects from abstract class

	//Default Constructor
	Product();

	//Parameters Constructor
	Product(int _serialNumber, char _row, int _shelf, float _quantity, int _areaStore, int _typeProduct);

	//Copy constructor
	Product(const Product& other);

	float price;

	float quantity;
	int areaStore;
	int typeProduct; //Farmer, Milk, Package


	//Only members of Product can access
	virtual float calcPrice(int factorCommerical = 0) const;

public:

	virtual int getSerialNumber() const { return this->serialNumber; };
	virtual char getRow() const { return this->row; };
	virtual int getShelf() const { return this->shelf; };
	virtual float getQuantity() const { return this->quantity; };
	virtual int getTypeProduct() const { return this->typeProduct; };
	virtual int getAreaStore() const { return this->areaStore; };
	virtual const float getPrice() const { return this->price; };

	virtual void setProduct(int _serialNumber, char _row, int _shelf, float _quantity, int _typeProduct, int _areaStore, float _price);
	virtual void setSerialNumber(int number = 0) { this->serialNumber = number; };
	virtual void setRow(char rowLetter = NULL) { this->row = rowLetter; };
	virtual void setShelf(int shelfNum = 0) { this->shelf = shelfNum; };
	virtual void setQuantity(float size = 0) { this->quantity = size; };
	virtual void setTypeProduct(int num = 0) { this->typeProduct = num; };
	virtual void setAreaStore(int num = 0) { this->areaStore = num; };
	void initPrice(int factorCommerical = 0);

	virtual void print() const;

	
	//Pure virtual method in order to make an abstract class
	virtual void aMethod() = 0;

	virtual ~Product();
};

