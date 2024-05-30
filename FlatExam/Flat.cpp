#include "Flat.h"

template <typename T>
Flat<T>::Flat(T area, int room, double price, string name)
    : area(area), room(room), price(price), name(name) {}

template <typename T>
void Flat<T>::displayIntoFile(ostream& out) {
    out << "Area: " << area << " Room: " << room << " Price: " << price << " Name: " << name << endl;
}

template <typename T>
void Flat<T>::display() {
    cout << "Area: " << area << " Room: " << room << " Price: " << price << " Name: " << name << endl;
}

template <typename T>
void Flat<T>::saveWithSpaces(ostream& out) {
    out << "Flat " << area << " " << room << " " << price << " " << name << endl;
}

template <typename T>
double Flat<T>::priceMeter() {
    return price / area;
}

template <typename T>
void Flat<T>::addPrice(double newPrice) {
    price += newPrice;
}

template <typename T>
double Flat<T>::getPrice() {
    return price;
}

template <typename T>
string Flat<T>::getName() {
    return name;
}

template <typename T>
int Flat<T>::getRooms() {
    return room;
}


// Explicit template instantiations
template class Flat<int>;
template class Flat<double>;