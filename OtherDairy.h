#pragma once
#include "Dairy.h"

class OtherDairy : public Dairy
{
private:
	int numOfNonDiary;
	vector<string> nonD;

	virtual const float calcPrice() const;

public:

	//Default C'tor
	OtherDairy();

	const int getNumOfNonDiary() const { return this->numOfNonDiary; };
	const void setNumOfNonDiary(int _num) { this->numOfNonDiary = _num; };

	virtual void aMethod() {};

	virtual void print() const override;

	~OtherDairy() {};
};

