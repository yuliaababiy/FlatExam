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

string Flat::getArea()
{
	return area;
}

string Flat::getRoom()
{
	return room;
}

string Flat::getPrice()
{
	return price;
}

string Flat::getName()
{
	return name;
}

void Flat::addPrice(int count)
{
	price += price;
}

double Flat::priceMeter()
{
	return price / area;
}

string Flat::getPrice()
{
	return price;
}



