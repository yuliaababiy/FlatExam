#include "FlatTwo"

FlatTwo::FlatTwo(double area, int room, double price, string name, int numRooms, int sale)
	: FlatTwo(double area, int room, double price, string name);

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

void FlaTwo::setSale(int sale)
{
	sale = sale;
}
