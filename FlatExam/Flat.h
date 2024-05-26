#ifndef FLAT_H // changed to ifndef
#define FLAT_H
#include <iostream>
using namespace std;

class Flat {
protected:
	double area;
	int room;
	double price;
	string name;
public :
	Flat(double area, int room, double price, string name);
	virtual void displayIntoFile(ostream& out);
	virtual void display();
	virtual double priceMeter();//обчислювати ціну квадратного метра?
	double getPrice();
	string getName();
	virtual int getRooms();
	virtual void saveWithSpaces(ostream& out);
    void addPrice(double newPrice);
	bool compareByArea(Flat& other);
};
#endif // FLAT_H


