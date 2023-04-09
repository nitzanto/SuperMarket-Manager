#include "Product.h"
#include "Supermarket.h"

Product::Product() : serialNumber(0), row(NULL), shelf(0), quantity(0), typeProduct(0), areaStore(0), price(0)
{
	cout << "Please enter the serial number for the product: " << endl;
	cin >> this->serialNumber;

	//----------Location--------///
	cout << "Please enter the location of the product: " << endl;
	cout << "Enter the row (A - Z): " << endl;
	cin >> this->row;
	cout << "Enter number of Shelf: " << endl;
	cin >> this->shelf;
	cout << "Enter at which area the product is located (1 - 3): " << endl;
	cin >> this->areaStore;

	//----------//

	cout << "Please enter the weight for the product: " << endl;
	cin >> this->quantity;

}

Product::Product(int _serialNumber, char _row, int _shelf, float _quantity, int _areaStore, int _typeProduct)
{
	this->serialNumber = _serialNumber;
	this->row = _row;
	this->shelf = _shelf;
	this->quantity = _quantity;
	this->areaStore = _areaStore;
	this->typeProduct = _typeProduct;
	this->price = calcPrice();
}

Product::Product(const Product& other) : serialNumber(other.serialNumber), row(other.row), shelf(other.shelf)
{
	quantity = other.quantity;
	typeProduct = other.typeProduct;
	areaStore = other.areaStore;
	price = other.price;
}


float Product::calcPrice(int factorCommerical) const
{
	if (this->areaStore == 3)
	{
		return this->getQuantity() * factorCommerical * 3;
	}
	else if (this->areaStore == 2)
	{
		return this->getQuantity() * factorCommerical * 2;
	}
	else // (this->areaStore == 1)
	{
		return this->getQuantity() * factorCommerical;
	}
}

void Product::setProduct(int _serialNumber, char _row, int _shelf, float _quantity, int _typeProduct, int _areaStore, float _price)
{
	this->serialNumber = _serialNumber;
	this->row = _row;
	this->shelf = _shelf;

	this->quantity = _quantity;
	this->typeProduct = _typeProduct;
	this->areaStore = _areaStore;
	this->price = _price;
}


void Product::initPrice(int factorCommerical)
{
	this->price = this->calcPrice(factorCommerical);
}

void Product::print() const
{
	cout << "Product Information" << endl;
	cout << "Serial Number: " << this->getSerialNumber() << " Located at:" << this->getRow() << " " << this->getShelf()
		<< " " << "(" << this->getQuantity() << "," << this->getTypeProduct() << "," << this->getAreaStore() << ") ";
}

//Destructor
Product::~Product()
{
}

