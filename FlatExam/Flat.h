#pragma once
#ifdef FLAT_H
#define FLAT_H
#include <iostream>
using namespace std;

class Flat {
protected:
	double area;
	int room;
	double price;
	string name;//?
public :
	Flat(double area, int room, double price, string name);
	virtual void displayIntoFile(ostream& out);
	virtual void display();
	double priceMeter();//обчислювати ціну квадратного метра?
	string getArea, getRoom, getPrice, getName;//повідомляти свої дані?
	double getPrice();

    void addPrice(double price);
	//порівняння за площею?
	

};
#endif // FLAT_H


