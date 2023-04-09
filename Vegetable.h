#pragma once
#include "Farmer.h"


class Vegetable : public Farmer {

private:

	int numOfVitimins;

	virtual float calcPrice() const;

public:

	Vegetable();

	//Parameters
	Vegetable(int _num);

	const int getNumOfVitimins() const { return this->numOfVitimins; };
	const void setNumOfVitimins(int _num) { this->numOfVitimins = _num; };

	virtual void aMethod() {};

	virtual void print() const override;

	virtual ~Vegetable() {};

};
