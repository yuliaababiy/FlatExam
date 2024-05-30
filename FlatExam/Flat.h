#ifndef FLAT_H 
#define FLAT_H
#include <iostream>
using namespace std;

template <typename T>
class Flat {
protected:
    T area;
    int room;
    double price;
    string name;
public:
    Flat(T area, int room, double price, string name);
    virtual void displayIntoFile(ostream& out);
    virtual void display();
    virtual double priceMeter();
    double getPrice();
    string getName();
    virtual int getRooms();
    virtual void saveWithSpaces(ostream& out);
    void addPrice(double newPrice);
};

#endif // FLAT_H
