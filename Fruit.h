#pragma once
#include "Farmer.h"

class Fruit : public Farmer {

private:

	int amountOfSugar;

	virtual float calcPrice() const;

public:

	Fruit();

	Fruit(int _num);

	const int getAmountOfSugar() const { return this->amountOfSugar; };
	const void setAmountOfSugar(int _num) { this->amountOfSugar = _num; };

	//In order to override the abstract class function
	virtual void aMethod() {};

	virtual ~Fruit();

	virtual void print() const override;

};