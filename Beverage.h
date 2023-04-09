#pragma once
#include "Dairy.h"
class Beverage : public Dairy
{
public:
	//Sends the type of dairy to the Dairy C'tor
	Beverage() : Dairy(1) {};

	virtual void aMethod() {};

	virtual ~Beverage() {};
};

