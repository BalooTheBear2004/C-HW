#include <iostream>
using namespace std;
#include<string>
#include "Date.h"

#ifndef CAKE_H
#define CAKE_H
class Cake {
protected:
    Date expiryDate;
    const int diameter;
    double height;
    double price;
    int storage;
    bool glutenFree;
public:
    Cake(Date expiryDate, int diameter, double height, double price, int storage, bool glutenFree);

    friend ostream& operator << (ostream& os, Cake& cake);

};

#endif