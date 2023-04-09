/*
Nitzan Toledo - I.D. 324247840
Daniel Fitoussi - I.D. 209273218
*/

#include <iostream>
#include "Supermarket.h"
using namespace std;

int main()
{
	Supermarket store;
	store.menu();
	store.printStore();

	Supermarket superShop("SuperShop", 3, 2);

	return 0;
}