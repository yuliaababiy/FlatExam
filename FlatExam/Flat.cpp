#include "Flat.h"

Flat::Flat(double area, int room, double price, string name)
	:area(area), room(room), price(price), name(name){}


void Flat::displayIntoFile(ostream& out)
{
	out << "Area:" << area << "Room: " << room << "Price: " << price << "Name: " << name << endl;
}

void Flat::display()
{
	cout << "Area:" << area << "Room: " << room << "Price: " << price << "Name: " << name << endl;
}

double Flat::priceMeter()
{
	return price / area;
}

void Flat::addPrice(double newPrice) // changed to double newPrice becase your .h file has double as paramyter
{
	price += newPrice;
}

double Flat::priceMeter()
{
	return price / area;
}

double Flat::getPrice() //if u do get functions there must be return type as your variable. In your case price is double so it must be double Flat::getPrice()
{
	return price;
}



