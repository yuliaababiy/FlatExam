#include "FlatTwo.h" // changed to FlatTwo.h

FlatTwo::FlatTwo(double area, int room, double price, string name, int numRooms, int sale)
	: Flat( area,  room,  price,  name), numRooms(numRooms), sale(sale) {}

void FlatTwo::displayIntoFile(ostream& out)
{
	out << "Area:" << area << "Room: " << room << "Price: " << price << "Name: " << name << 
		"NumRooms:" << numRooms << "Sale:" << sale << endl;
}

void FlatTwo::display()
{
	cout << "Area:" << area << "Room: " << room << "Price: " << price << "Name: " << name <<
		"NumRooms:" << numRooms << "Sale:" << sale << endl;
}

double FlatTwo::calculatePriceMeter()
{
	return area / price;
}

void FlatTwo::setSale(int newSale) // changed from FlaTwo to FlatTwo and changed variable name to newSale to avoid disappointment with class variable name 
{
	sale = newSale;
}
