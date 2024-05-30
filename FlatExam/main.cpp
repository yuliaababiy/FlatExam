#include <iostream>
#include <algorithm>
#include "Flat.h"
#include "FlatTwo.h"
#include <vector>
#include <fstream>
#include <set>
using namespace std;

template <typename T>
void displayFlat(vector<Flat<T>*>& flats) {
    for (auto flat : flats) {
        flat->display();
    }
}

template <typename T>
void saveToFile(vector<Flat<T>*>& flats, string filename) {
    ofstream file(filename);
    for (auto flat : flats) {
        flat->displayIntoFile(file);
    }
}

template <typename T>
void loadFromFile(vector<Flat<T>*>& flats, string filename) {
    ifstream file(filename);
    double area;
    double price;
    int room, numRooms, sale;
    string name;
    string type;

    while (file >> type >> area >> room >> price >> name) {
        if (type == "Flat") {
            flats.push_back(new Flat<T>(area, room, price, name));
        }
        else if (type == "FlatTwo") {
            file >> numRooms >> sale;
            flats.push_back(new FlatTwo<T>(area, room, price, name, numRooms, sale));
        }
    }
}

int main() {
    vector<Flat<int>*> flats;
    ofstream file("input.txt", ios::app);
    int choice;
    while (true) {
        cout << "Enter action you want to do:" << endl;
        cout << "1 - load from file and print" << endl;
        cout << "2 - add object to file" << endl;
        cout << "3 - print objects into file" << endl;
        cout << "4 - output without duplications" << endl;
        cout << "5 - get number of rooms" << endl;
        cout << "6 - get number of 3-room flats" << endl;
        cout << "7 - exit" << endl;
        cin >> choice;
        if (choice == 1) {
            loadFromFile(flats, "input.txt");
            displayFlat(flats);
        }
        else if (choice == 2) {
            string type;
            double area, price;
            int room, numRooms, sale;
            string name;
            cout << "Enter type Flat or FlatTwo: ";
            cin >> type;
            if (type == "Flat") {
                cout << "Enter area: ";
                cin >> area;
                cout << "Enter room: ";
                cin >> room;
                cout << "Enter price: ";
                cin >> price;
                cout << "Enter name: ";
                cin >> name;
                Flat<int>* c = new Flat<int>(area, room, price, name);
                c->saveWithSpaces(file);
            }
            else if (type == "FlatTwo") {
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
                FlatTwo<int>* e = new FlatTwo<int>(area, room, price, name, numRooms, sale);
                e->saveWithSpaces(file);
            }
            else {
                cout << "You entered wrong!" << endl;
                break;
            }
        }
        else if (choice == 3) {
            loadFromFile(flats, "input.txt");
            saveToFile(flats, "output.txt");
        }
        else if (choice == 4) {
            loadFromFile(flats, "input.txt");
            set<string> unique;
            for (auto f : flats) {
                unique.insert(f->getName());
            }
            for (auto u : unique) {
                cout << u << " ";
            }
            cout << endl;
        }
        else if (choice == 5) {
            loadFromFile(flats, "input.txt");
            int numOfRooms = 0;
            for (auto f : flats) {
                numOfRooms += f->getRooms();
            }
            cout << "Num of rooms: " << numOfRooms << endl;
        }
        else if (choice == 6) {
            loadFromFile(flats, "input.txt");
            int numOf3Rooms = 0;
            for (auto f : flats) {
                if (f->getRooms() == 3) {
                    numOf3Rooms += 1;
                }
            }
            cout << "Num of 3-room flats: " << numOf3Rooms << endl;
        }
        else if (choice == 7) {
            break;
        }
        else {
            cout << "You entered wrong!" << endl;
        }
    }
    return 0;
}
