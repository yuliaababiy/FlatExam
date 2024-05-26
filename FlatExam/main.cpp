#include <iostream>
#include <algorithm>
#include <deque>
#include "Flat.h"
#include "FlatTwo.h"

void displayFlat(deque<Flat*>& flats) // changed from flat to flats
{
	for (auto flat : flats) //
	{
		flat ->display();
	}
}


	// please add input from file and output into file
	// also add menu


void loadFromFile(vector <Flat*>& flats, string filename)
{
	ifstream file(filename);
	double area, price;
	int room, numRooms, sale;
	string name;

	while (file >> area >> room >> name)
	{
		if (type == "Flat")
		{
			file >> Flat;
			clothes.push_back(new Flat(area, room, name));
		}
		else if (type == "FlatTwo")
		{
			file >> eveningType ;
			clothes.push_back(new FlatTwo(area, room, name, numRooms, sale));
		}
	}
}

int main()
{
	vector <Flat*> flat;
	ofstream file("input.txt", ios::app);
	int choice;
	while (true)
	{
		cout << "Enter action u wanna to do:" << endl;
		cout << "1 - load from file and print" << endl;
		cout << "2 - add object to file" << endl;
		cout << "3 - print objects into file" << endl;;
		cout << "4 - exit" << endl;
		cin >> choice;
		if (choice == 1)
		{
			loadFromFile(flat, "input.txt");
			displayFlat(flats);
		}
		else if (choice == 2)
		{
			double area, price;
			int room, numRooms, sale;
			string name;
			cout << "Enter area: " << endl;
			cin >> area;
			if (type == "Flat")
			{
				cout << "Enter area: ";
				cin >> area;
				cout << "Enter room: ";
				cin >> room;
				cout << "Enter price: ";
				cin >> price;
				cout << "Enter name: ";
				cin >> name;
				Flat* c = new Flat(area, room, price, name);
				c->saveWithSpaces(file);
			}
			else if (type == "FlatTwo")
			{
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
				FlatTwo* e = new FlatTwo(area, room, price, name, numRooms, sale);
				e->saveWithSpaces(file);
			}
			else
			{
				cout << "You entered wrong!" << endl;
				break;
			}
		}
		else if (choice == 3)
		{
			loadFromFile(flat, "input.txt");
			saveToFile(flat, "output.txt");
		}
		else if (choice == 4)
		{
			break;
		}
		else
		{
			cout << "You entered wrong!" << endl;
		}
	}
	return 0;
