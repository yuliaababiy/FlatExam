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
	double priceMeter();//����������� ���� ����������� �����?
	string getArea, getRoom, getPrice, getName;//���������� ��� ���?
	double getPrice();

    void addPrice(double price);
	//��������� �� ������?
	

};
#endif // FLAT_H


