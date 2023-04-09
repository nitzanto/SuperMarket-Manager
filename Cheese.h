#pragma once
#include "Dairy.h"
class Cheese : public Dairy
{
private:
	int additions;
	virtual const float calcPrice() const;

public:

	//Default C'tor
	Cheese();

	//Parameters C'tor
	Cheese(int _num);

	const int getAdditions() const { return this->additions; };
	const void setAdditions(int _num) { this->additions = _num; };

	virtual void aMethod() {};

	virtual void print() const override;

	virtual ~Cheese() {};
};

