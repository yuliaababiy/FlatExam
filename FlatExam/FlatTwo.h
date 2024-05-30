#ifndef FLATTWO_H
#define FLATTWO_H

#include "Flat.h"

template <typename T>
class FlatTwo : public Flat<T> {
protected:
    int numRooms;
    int sale;
public:
    FlatTwo(T area, int room, double price, string name, int numRooms, int sale);
    void displayIntoFile(ostream& out) override;
    void display() override;
    void saveWithSpaces(ostream& out) override;
    double priceMeter() override;
    void setSale(int newSale);
    int getRooms() override;
};

#endif // FLATTWO_H
