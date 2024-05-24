#pragma once
#ifdef FLATTWO
#define FLATTWO
#include "Flat.h"

class FlatTwo : public Flat 
{
protected:
	int numRooms;
	int sale;
public:
	FlatTwo(int numRooms, int sale);
	void displayIntoFile(ostream& out) override;
	void display() override;
	double calculatePriceMeter();//?
	void setSale(int sale);

};
#endif 
