#include <iostream>
#include <algorithm>
#include <deque>
#include "Flat.h"
#include "FlatTwo.h"

void displayFlat(deque<Flat*>& flat)
{
	for (auto flat : flats)
	{
		flat ->display();
	}
}

int main()
{
	deque<Flat*>flats ;

	double area;
	int room;
	double price;
	string name;
	int numRooms;
	int sale;

	cout << "Enter area: ";
	cin >> area ;
	cout << "Enter room: ";
	cin >> room ;
	cout << "Enter price: ";
	cin >> price ;
	cout << "Enter name: ";
	flats.push_back(new Flat(area, room, price, name));

	cout << "Enter area: ";
	cin >> area;
	cout << "Enter room: ";
	cin >> room;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter numRooms: ";
	cin >> numRooms;
	cout << "Enter sale: ";
	cin >> sale;
	flats.push_back(new FlatTwo(area, room, price, name, numRooms, sale));

	displayFlats(flats);
	// ??
}