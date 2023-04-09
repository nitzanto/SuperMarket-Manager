#include "Supermarket.h"

Supermarket::Supermarket() : name("NA"), factorCommerical(0), numOfProducts(0)
{
	cout << "Please enter the name of the store: " << endl;
	cin >> this->name;

	cout << "SuperMarket " << this->getNameOfStore() << " Menu" << endl;
	cout << "****************" << endl;

	cout << "What's the comemrical factor? " << endl;
	cin >> this->factorCommerical;

	cout << "How many products are there in the store? " << endl;
	cin >> this->numOfProducts;

}

Supermarket::Supermarket(string _name, int _factor, int _numOfProducts)
{
	this->name = _name;
	this->factorCommerical = _factor;
	this->numOfProducts = _numOfProducts;
}


void Supermarket::insertProduct(Product* other)
{
	this->store.push_back(other);
	cout << "Product has been inserted into the shop" << endl;
}

const bool Supermarket::isSerialKey(const int serialKey, const int index) const
{
	for (int i = 0; i < index; i++)
	{
		if (this->store[i]->getSerialNumber() == serialKey)
		{
			//Serial Key isn't unique and already exists
			return true;
		}
	}

	//Serial key is unique
	return false;
}

const float Supermarket::getPriceOfAllProducts()
{
	float sum = 0;

	for (int i = 0; i < this->getNumOfProducts(); i++)
	{
		sum = this->store[i]->getPrice() + sum;
	}

	return sum;
}


void Supermarket::printStore()
{
	cout << "************" << endl;
	cout << this->getNameOfStore() << " SuperMarket's Products: " << endl;
	for (int i = 0; i < this->getNumOfProducts(); i++)
	{
		this->store[i]->print();
		cout << endl;
	}

	cout << "Commerical Factor is: " << this->getFactorCommerical() << endl;
	cout << "Overall price of all the products is " << this->getPriceOfAllProducts() << endl;
}

void Supermarket::menu()
{
	int choice = 0;
	int index = 0;
	while (index < this->getNumOfProducts()) {

		choice = 0;

		cout << "Please, Fill the information for the " << index << " Product" << endl;
		cout << "What's the type of the product? (1 - Farmer, 2 - Dairy, 3 - Package) " << endl;
		cin >> choice;

		if (choice == 1) //Farmer
		{
			cout << "Please enter the type of Farmer Product ( 1 - Vegetable , 2 - Fruit) " << endl;
			cin >> choice;

			if (choice != 1) //Fruit
			{
				this->store.push_back(new Fruit());
			}
			else //Vegetable
			{
				this->store.push_back(new Vegetable());
			}

			this->store[index]->setTypeProduct(1);

		}
		else if (choice == 2) // Dairy
		{
			cout << "Which type of Dairy Product is it? ( 1 - Beverage, 2 - Yogurt, 3 - Cheese, 4 - Other Type" << endl;
			cin >> choice;
			if (choice == 1) //Beverage
			{
				this->store.push_back(new Beverage());
			}
			else if (choice == 2) //Yogurt
			{
				this->store.push_back(new Yogurt());
			}
			else if (choice == 3) //Cheese
			{
				this->store.push_back(new Cheese());
			}
			else //Other Type of Dairy
			{
				this->store.push_back(new OtherDairy());
			}

			this->store[index]->setTypeProduct(2);
		}
		else // 3 == Package
		{
			this->store.push_back(new Package());
			this->store[index]->setTypeProduct(3);
		}

		//if serial key already exists
		if (this->isSerialKey(this->store[index]->getSerialNumber(), index))
		{
			cout << "ERROR - This Serial Key already exists, product " << index << " hasn't been entered into the supermarket" << endl;
			cout << "Please re-enter the product with a different serial key" << endl;
			cout << "********************" << endl;
		}
		else
		{
			//SetInit for price with parameter factor
			this->store[index]->initPrice(this->getFactorCommerical());

			index++;
			cout << endl;
		}
	}
}

Supermarket::~Supermarket()
{
}
