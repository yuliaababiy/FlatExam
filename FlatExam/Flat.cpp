#include "Flat.h"

Flat::Flat(double area, int room, double price, string name)
	:area(area), room(room), price(price), name(name) {}


void Flat::displayIntoFile(ostream& out)
{
	out << "Area:" << area << " Room: " << room << " Price: " << price << " Name: " << name << endl;
}


void Flat::display()
{
	cout << "Area:" << area << " Room: " << room << " Price: " << price << " Name: " << name << endl;
}


double Flat::priceMeter()
{
	return price / area;
}


void Flat::addPrice(double newPrice)
{
	price += newPrice;
}


double Flat::getPrice()
{
	return price;
}

string Flat::getName()
{
	return name;
}

int Flat::getRooms()
{
	return room;
}

bool Flat::compareByArea(Flat& other)
{
	return area < other.area;
}

void Flat::saveWithSpaces(ostream& out)
{
	out << "Flat " << area << " " << room << " " << price << " " << name << endl;
}