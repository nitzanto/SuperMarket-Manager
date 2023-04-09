#pragma once
#include "Dairy.h"
class Yogurt : public Dairy
{
public:
	//Sends the type of dairy to the Dairy C'tor
	Yogurt() : Dairy(2) {};

	virtual void aMethod() {};

	virtual ~Yogurt() {};
};

