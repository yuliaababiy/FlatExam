
#ifndef FLATTWO // changed to ifndef
#define FLATTWO
#include "Flat.h"

class FlatTwo : public Flat
{
protected:
	int numRooms;
	int sale;
public:
	FlatTwo(double area, int room, double price, string name, int numRooms, int sale); // u have to add properties from Flat class and then from your original class
	void displayIntoFile(ostream& out) override;
	void display() override;
	void saveWithSpaces(ostream& out) override;
	double priceMeter() override; // обчислення ціни квадратного метра (потрібно врахувати додаткові кімнати та знижку)
	void setSale(int newSale);
	int getRooms() override;

};
#endif 
