#include "FlatTwo.h"

template <typename T>
FlatTwo<T>::FlatTwo(T area, int room, double price, string name, int numRooms, int sale)
    : Flat<T>(area, room, price, name), numRooms(numRooms), sale(sale) {}

// батьківський клас - має this, дочірній не має this
template <typename T>
void FlatTwo<T>::displayIntoFile(ostream& out) {
    out << "Area: " << this->area << " Room: " << this->room << " Price: " << this->price << " Name: " << this->name
        << " NumRooms: " << numRooms << " Sale: " << sale << endl;
}

template <typename T>
void FlatTwo<T>::display() {
    cout << "Area: " << this->area << " Room: " << this->room << " Price: " << this->price << " Name: " << this->name
        << " NumRooms: " << numRooms << " Sale: " << sale << endl;
}

template <typename T>
void FlatTwo<T>::setSale(int newSale) {
    sale = newSale;
}

template <typename T>
void FlatTwo<T>::saveWithSpaces(ostream& out) {
    out << "FlatTwo " <<  this->area << " " << this->room << " " << this->price << " " << this->name
        << " " << numRooms << " " << sale << endl;
}

template <typename T>
double FlatTwo<T>::priceMeter() {
    double percent = this->price / 100;
    return (this->price - percent * sale) / this->area;
}

template <typename T>
int FlatTwo<T>::getRooms() {
    return this->room + numRooms;
}

// Explicit template instantiations
template class FlatTwo<int>;
template class FlatTwo<double>;
